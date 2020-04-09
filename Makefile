# Makefile for spellcheck
spellcheck:	spellcheck.o readDictionary.o dictionary.o distance.o
	gcc -o spellcheck spellcheck.o readDictionary.o dictionary.o distance.o

spellcheck.o:	spellcheck.c readDictionary.h dictionary.h distance.h
	gcc -c -Wall --pedantic spellcheck.c

distance.o: distance.c distance.h
	gcc -c -Wall --pedantic distance.c

readDictionary.o: readDictionary.c readDictionary.h
	gcc -c -Wall --pedantic dictionary.c

dictionary.o: dictionary.c distance.h readDictionary.h
	gcc -c -Wall --pedantic dictionary.c

all:	spellcheck

clean:
	rm -f spellcheck.o dictionary.o distance.o readDictionary.o spellcheck

tarball:
  tar -c -f spellcheck.tar -v spellcheck.c readDictionary.c readDictionary.h distance.c distance.h dictionary.c dictionary.h Makefile
