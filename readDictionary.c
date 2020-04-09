#include <string.h>
#include <stdio.h>
#include "readDictionary.h"

void readDictionary(char dictionary[MAX_DICTIONARY_WORDS][MAX_WORD_LENGTH]){
  static int i=0;
  static FILE *file;

  file = fopen("/usr/share/dict/cracklib-small","r");//opens the dictionary
  /*create a 2d array of the dictionary*/
  while(fgets(dictionary[i],sizeof(dictionary[i]),file)!= NULL){
    dictionary[i][strlen(dictionary[i])-1] = '\0';
    i++;
  }
}
