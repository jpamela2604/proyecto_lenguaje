#!/bin/bash
flex --prefix=yy  --header-file=lexicoGrafik.h -o lexicoGrafik.cpp lexicoGrafik.l
bison -d -o  gramaticagrafik.cpp -p yy --defines=gramaticagrafik.h gramaticagrafik.y
