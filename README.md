# sauce.nvim 🥫

A lightweight [Neovim](https://neovim.io/) plugin and [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar (`saucelang`) for cataloging, organizing, and bookmarking media entries, cast members, categories, and scene timestamps in `sauce.txt` files.

---

## ✨ Features

- **Custom Tree-sitter Grammar (`saucelang`)**: Fast, incremental, and accurate syntax parsing.
- **Automatic Filetype Detection**: Automatically associates `sauce.txt` buffers with the `saucelang` filetype.
- **Granular Highlight Captures**: Dedicated highlight groups for titles, cast lists, categories, timestamps, operators, and delimiters.
- **Flexible Syntax**: Supports single actors, multi-cast lists, chained categories, timestamp bookmarks, and inline comments.

---

## 📋 Syntax Specification (`sauce.txt`)

A `sauce.txt` file consists of entries, optionally separated by commas or newlines.

### Grammar Overview

```
Movie Title { [Cast List | Actor] ; Category1 ; Category2 ; [Timestamps] }
```

### Syntax Elements

| Element | Syntax | Example | Highlight Group |
|---|---|---|---|
| **Title / Movie Name** | Text followed by `{ ... }` | `Inception { ... }` | `@sauce.title` |
| **Single Cast** | Text inside body | `{ Leonardo DiCaprio }` | `@sauce.cast` |
| **Multi Cast** | `[ Actor 1 \| Actor 2 \| ... ]` | `{ [Christian Bale \| Heath Ledger] }` | `@sauce.cast`, `@operator` |
| **Category / Tag** | Text separated by `;` | `{ Sci-Fi; Thriller }` | `@sauce.category` |
| **Timestamps** | `[ time1; time2; ... ]` | `{ [00:45:10; 01:23:45] }` | `@sauce.time` |
| **Empty Cast Placeholder** | Starting body with `;` | `{ ; Action; [01:05:00] }` | `@punctuation.delimiter` |
| **Comments** | Wrapped with `//` | `// My media notes //` | — |

---

### Example `sauce.txt`

```text
// Highly recommended sci-fi movies //

Interstellar {
  Matthew McConaughey;
  Sci-Fi; Adventure; Drama;
  [00:45:12; 01:32:00; 02:41:20]
},

Inception {
  [Leonardo DiCaprio | Joseph Gordon-Levitt | Elliot Page];
  Action; Sci-Fi;
  [00:15:30; 01:50:00]
},

// Entry with no cast specified, only categories and timestamps //
Fight Club {
  ;
  Psychological Thriller; Drama;
  [00:30:15; 01:15:45]
},

// Quick bookmark with just title and timestamp list //
The Matrix {
  [00:25:00; 01:40:15]
},

// Simple title-only placeholder //
Pulp Fiction {}
```

---

## 📦 Installation

### Requirements

- Neovim `>= 0.9.0`
- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- A C compiler (e.g., `gcc`, `clang`) for compiling the Tree-sitter parser

### Using [lazy.nvim](https://github.com/folke/lazy.nvim)

Create or add to `lua/plugins/sauce.lua` (or include directly in your plugins table):

```lua
return {
  "vinayakgupta29/sauce.nvim",
  dependencies = {
    "nvim-treesitter/nvim-treesitter",
  },
  config = function(_, opts)
    require("sauce").setup(opts)

    local function set_colors()
      vim.api.nvim_set_hl(0, "@sauce.title", { fg = "#89b4fa", bold = true })
      vim.api.nvim_set_hl(0, "@sauce.cast", { fg = "#f38ba8" })
      vim.api.nvim_set_hl(0, "@sauce.category", { fg = "#a6e3a1" })
      vim.api.nvim_set_hl(0, "@sauce.time", { fg = "#fab387" })
      vim.api.nvim_set_hl(0, "@operator", { fg = "#cba6f7" })
      vim.api.nvim_set_hl(0, "@punctuation.delimiter", { fg = "#9399b2" })
      vim.api.nvim_set_hl(0, "@punctuation.bracket", { fg = "#bac2de" })
    end

    -- Apply colors initially
    vim.schedule(set_colors)

    -- Re-apply colors when changing colorschemes
    vim.api.nvim_create_autocmd("ColorScheme", {
      callback = set_colors,
    })
  end,
}
```

> [!NOTE]
> `vim.schedule(set_colors)` and the `ColorScheme` autocommand ensure your highlight customizations persist even when you change or reload your colorscheme.

---

## 🎨 Highlight Groups

The plugin defines custom Tree-sitter query captures in `queries/saucelang/highlights.scm`. You can customize each highlight group to match your theme:

| Highlight Group | Description | Default Example Palette (Catppuccin Mocha) |
|---|---|---|
| `@sauce.title` | Movie / media title | `#89b4fa` (Blue, bold) |
| `@sauce.cast` | Cast names and cast list items | `#f38ba8` (Red / Pink) |
| `@sauce.category` | Categories, genres, and tags | `#a6e3a1` (Green) |
| `@sauce.time` | Timestamp bookmarks | `#fab387` (Peach / Orange) |
| `@operator` | Delimiters between cast items (`\|`) | `#cba6f7` (Mauve / Purple) |
| `@punctuation.delimiter` | Entry and field separators (`,`, `;`) | `#9399b2` (Overlay) |
| `@punctuation.bracket` | Braces and brackets (`{`, `}`, `[`, `]`) | `#bac2de` (Subtext) |

---

## ⚙️ How It Works

1. **Parser Registration**: `require("sauce").setup()` registers `saucelang` with `nvim-treesitter.parsers`, pointing to the bundled C parser at `src/parser.c`.
2. **Filetype Detection**: `vim.filetype.add` links any file named `sauce.txt` to the `saucelang` filetype.
3. **Tree-sitter Highlighting**: Tree-sitter applies highlight captures according to `queries/saucelang/highlights.scm`.

---

## 🛠️ Tree-sitter Grammar Development

The underlying grammar is written in `grammar.js` and provides multi-language bindings:

- C / C++
- Go
- Node.js
- Python
- Rust
- Swift

To regenerate the parser after modifying `grammar.js`:

```bash
# Using npm
npm run generate

# Or using the Tree-sitter CLI directly
tree-sitter generate
```

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).
