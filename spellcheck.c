************************************************************************
Ebenezer Osei                     11/2/2018
CS250                             Project 2
This program gets a line from user and compares each word of
the line to a dictionary to check if it is correct. It prints
out the line while correcting the wrong words.
************************************************************************
#include <stdio.h>
#include <string.h>
#include "distance.h"
#include "readDictionary.h"
#include "dictionary.h"

#define MAX_LINE_LENGTH 1024 //maximum lenth of sentence

int main(int argc,char *argv[]){
    char line[MAX_LINE_LENGTH];
    char dictionary[MAX_DICTIONARY_WORDS][MAX_WORD_LENGTH];
    char* word;
    /*reads line from user and stores in line*/
    fgets(line,MAX_LINE_LENGTH,stdin);

    readDictionary(char dictionary[MAX_DICTIONARY_WORDS][MAX_WORD_LENGTH]);

    word = strtok(line," ");//stores each word in the line

    while (word != NULL) {
    dictionary(word,dictionary[MAX_DICTIONARY_WORDS][MAX_WORD_LENGTH]);//the main spellcheck function
    word = strtok(NULL," \n");

    }
}
