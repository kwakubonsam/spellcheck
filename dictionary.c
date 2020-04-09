#include <string.h>
#include <stdio.h>
#include "readDictionary.h"
#include "distance.h"

void dictionary(char *word,char dictionary[MAX_DICTIONARY_WORDS][MAX_WORD_LENGTH]){
  static int j,k,minimum,position,bool,new_mini=0;
  /*loop to compare each word in the dictionary to word*/
  for (j=0;j<MAX_DICTIONARY_WORDS;j++){
    if((strcmp(word,dictionary[j]))== 0){
      bool = 1;
      break;
    }
  }
  /*prints word if it is correct*/
  if (bool){
    printf(" %s ",word);
    bool = 0;
  }
  /*find the word that has the list Levenshtein distance and prints it*/
 else{
    minimum = 9999;
    position = -1;
    for (k=0;k< MAX_DICTIONARY_WORDS;k++){
      new_mini = distance(dictionary[k], word);
      if (minimum > new_mini){
        minimum = new_mini;
        position = k;
      }
    }
    printf(" *%s* ",dictionary[position]);

  }
}
