clear
cd /home/pam/Documents/JUNIO/PROYECTO/PROYECTO1
flex --prefix=zz  --header-file=lexicoHaskell.h -o lexicoHaskell.cpp lexicoHaskell.l
bison -d -o  gramaticahaskell.cpp -p zz --defines=gramaticahaskell.h gramaticahaskell.y
