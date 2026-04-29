package tree_sitter_saucelang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-saucelang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_saucelang.Language())
	if language == nil {
		t.Errorf("Error loading Saucelang grammar")
	}
}
