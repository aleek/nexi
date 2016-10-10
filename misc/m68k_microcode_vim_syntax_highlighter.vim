" Vim syntax file
" Language: m68000 microcode source code
" Maintainer: Aleksander Dutkowski <aleksander@dutkowski.me>

if exists("b:current_syntax")
  finish
endif

" comments
syn region Comment	start="#" end="$"
syn region Comment	start="//" end="$"


syn keyword instruction_brackets external instr endinstr
syn region instrBlock start="instr" end="endinstr" fold transparent contains=microcodeInstruction,goto

" label
syn match asmx86Label		"^[a-z_?.][a-z0-9_?.$]*$"
syn match asmx86Label		"^[a-z_?.][a-z0-9_?.$]*\s"he=e-1
syn match asmx86Label		"^\s*[a-zA-Z_?.][a-zA-Z0-9_?.$]*:"he=e-1

" jump label
syn region goto start="goto" end="$" contains=goto_keyword,goto_label
syn keyword goto_keyword goto


let b:current_syntax = "m68kmc"

hi def link instruction_brackets Keyword
hi def link instrBlock String
hi def link asmx86Label Constant
hi def link Comment DarkGrey
hi def link goto_keyword Keyword
hi def link goto_label Constant
