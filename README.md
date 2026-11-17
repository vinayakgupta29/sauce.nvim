# sauce.nvim

A Neovim plugin and Tree-sitter parser for **saucelang** (`sauce.txt`) — a structured domain-specific language designed for cataloging media entries, cast members, categories/genres, and timestamps.

---

## Features

- **Tree-sitter Powered Highlighting:** Fast, accurate syntax highlighting for `.txt` files matching `sauce.txt` (`filetype=saucelang`).
- **Single-Line Entry Model:** Enforces a clean, streamable 1-line-per-entry data format.
- **Flexible Comment Blocks:** Comment blocks (`// ... //`) can be placed anywhere within an entry, and are the only place where newlines are permitted within an entry.
- **Automatic Build & Install:** Automatically builds and loads the shared library parser (`saucelang.so` / `.dylib` / `.dll`) via `make nvim` on first startup if not already compiled.

---

## Language Specification (`saucelang`)

### 1. File Structure & Entries
- Files contain a sequence of entries, optionally separated by commas `,` or newlines.
- **Each entry must be exactly 1 line**, unless a comment block spanning multiple lines is included.
- An entry starts with a movie/media name, followed by `{` and `}`, enclosing an optional record body:
  ```
  Movie Title { [record_body] }
  ```

### 2. Record Body Formats
Inside the braces `{ ... }`, the record body can take one of several forms:

- **Cast Record:**
  - Single cast member:
    ```
    Inception { Leonardo DiCaprio ; Sci-Fi / Thriller ; [ 01:23:45 ] }
    ```
  - Cast list separated by pipe `|` inside brackets `[ ... ]`:
    ```
    The Dark Knight { [ Christian Bale | Heath Ledger ] ; Action / Drama ; [ 00:45:10 ; 01:52:00 ] }
    ```
- **Category Record (Cast omitted):**
  ```
  Interstellar { Sci-Fi / Adventure ; [ 02:10:00 ] }
  ```
- **Placeholder Record (Leading semicolon):**
  ```
  Memento { ; Mystery / Thriller ; [ 00:30:15 ] }
  ```
- **Timestamp-Only Record:**
  ```
  Dunkirk { [ 00:15:20 ; 01:10:45 ] }
  ```
- **Empty Record:**
  ```
  Tenet { }
  ```

### 3. Comment Blocks
Comments in `saucelang` are block-delimited using `//`:
```
// this is a comment block //
```

- **Allowed Anywhere in an Entry:**
  - Before the title:
    ```
    // Favorite // Inception { Leonardo DiCaprio ; Sci-Fi }
    ```
  - Between title and opening brace:
    ```
    Inception // Rewatched // { Leonardo DiCaprio ; Sci-Fi }
    ```
  - Inside the record body:
    ```
    Inception { // lead // Leonardo DiCaprio ; // genre // Sci-Fi ; [ 01:23:45 ] }
    ```
  - Inside cast or timestamp lists:
    ```
    Movie { [ Actor 1 | // cameo // Actor 2 ] ; [ // scene 1 // 00:10:00 ; 00:25:00 ] }
    ```
  - In empty or placeholder records:
    ```
    Movie { // note // }
    Movie { // note // ; Sci-Fi }
    ```
- **Multi-Line Comment Blocks:**
  Newlines are only permitted within comment blocks:
  ```
  Inception { //
    Note: Multi-line comment block
    describing this entry
  // Leonardo DiCaprio ; Sci-Fi }
  ```

---

## Installation

### Requirements
- Neovim `>= 0.9.0`
- A C compiler (`gcc`, `clang`, or MSVC `cl.exe`)
- `make`

### Using `lazy.nvim`
```lua
{
  "vinayakg236/sauce.nvim",
  ft = "saucelang",
  config = function()
    require("sauce").setup()
  end,
}
```

### Using `packer.nvim`
```lua
use {
  "vinayakg236/sauce.nvim",
  config = function()
    require("sauce").setup()
  end,
}
```

### Manual Setup
In your `init.lua`:
```lua
require("sauce").setup()
```

When you first open a `sauce.txt` file, `sauce.nvim` automatically builds the shared library into `parser/saucelang.<ext>` if it doesn't already exist.

---

## Tree-sitter Highlighting

`sauce.nvim` highlights the following elements:

| Element | Capture Group | Highlighted Token |
| :--- | :--- | :--- |
| Movie Title | `@sauce.title` | `(movie_name)` |
| Cast Name | `@sauce.cast` | `(cast_name)`, `(cast_list_item)` |
| Category | `@sauce.category` | `(category)` |
| Timestamp | `@sauce.time` | `(timestamp)` |
| Comment | `@comment` | `(comment)` |
| Operators | `@operator` | `\|` |
| Delimiters | `@punctuation.delimiter` | `,`, `;` |
| Brackets | `@punctuation.bracket` | `[`, `]`, `{`, `}` |

---

## Development & Building

If you are modifying the grammar:

1. **Install Tree-sitter CLI:**
   ```bash
   npm install -g tree-sitter-cli
   ```

2. **Generate the Parser:**
   ```bash
   tree-sitter generate
   ```

3. **Run Grammar Tests:**
   ```bash
   tree-sitter test
   ```

4. **Compile the Neovim Parser:**
   ```bash
   make nvim
   ```

Language bindings are also provided for Node.js, Python, Rust, Go, Swift, and C.

---

## License

This project is licensed under the [MIT License](LICENSE).
