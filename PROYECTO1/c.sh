#!/bin/bash
#!bison -d gramaticahaskell.y bison -d gramaticagrafik.y
#!flex lexicoHaskell.l flex lexicoGrafik.l
#! cc lex.yy.c gramaticahaskell.tab.c -o analizador -lfl -lm
#! cc lex.yy.c gramaticagrafik.tab.c -o analizador -lfl -lm
 #!include "gramaticahaskell.h"
 #!include "lexicoHaskell.h"
flex --prefix=zz  --header-file=lexicoHaskell.h -o lexicoHaskell.cpp lexicoHaskell.l
bison -d -o  gramaticahaskell.cpp -p zz --defines=gramaticahaskell.h gramaticahaskell.y
