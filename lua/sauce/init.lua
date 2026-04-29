local M = {}

function M.setup()
  -- register parser
  local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

  parser_config.saucelang = {
    install_info = {
      url = vim.fn.stdpath("data") .. "/lazy/sauce.nvim",
      files = { "src/parser.c" },
    },
    filetype = "saucelang",
  }

  -- filetype detection
  vim.filetype.add({
    filename = {
      ["sauce.txt"] = "saucelang",
    },
  })
end

return M