local M = {}

local function parser_extension()
  if vim.uv.os_uname().sysname == "Windows_NT" then
    return "dll"
  elseif vim.uv.os_uname().sysname == "Darwin" then
    return "dylib"
  else
    return "so"
  end
end

local function ensure_parser_installed(plugin)
  --  local plugin = debug.getinfo(1, "S").source:sub(2)
  -- plugin = vim.fs.dirname(vim.fs.dirname(plugin))

  local ext = parser_extension()
  local parser = plugin .. "/parser/saucelang." .. ext

  if vim.uv.fs_stat(parser) then
    return true
  end

  vim.notify("Sauce.nvim: building Tree-sitter parser...", vim.log.levels.INFO)

  local result = vim.system(
    { "make", "nvim" },
    { cwd = plugin }
  ):wait()

  if result.code ~= 0 then
    vim.notify(result.stderr, vim.log.levels.ERROR)
    return false
  end

  return vim.uv.fs_stat(parser) ~= nil
end

function M.setup(opts)
  opts = opts or {}
  local plugin = opts.plugin_dir or vim.fs.normalize(
    vim.fs.joinpath(vim.fs.dirname(debug.getinfo(1, "S").source:sub(2)), "..", "..")
  )

  vim.filetype.add({
    filename = {
      ["sauce.txt"] = "saucelang",
    },
  })

  ensure_parser_installed(plugin)
  vim.treesitter.language.add("saucelang", {
    path = plugin .. "/parser/saucelang." .. parser_extension(),
  })

  vim.treesitter.language.register("saucelang", "saucelang")
  vim.api.nvim_create_autocmd("FileType", {
  pattern = "saucelang",
  callback = function(args)
    vim.treesitter.start(args.buf, "saucelang")
  end,
})
end

return M
