#include <stdio.h>
#include "optionsAB.h"
#include <string.h>
#define LINE 256
#define WORD 30

int main(){


char  word [WORD];
char option_type [WORD];

int k=getWord(word);
getWord(option_type);



if(*(option_type)=='a'){
   
     print_lines(word,k);
}
else if(*(option_type)=='b'){
   print_similar_words( word, k);
}

else
    printf("No such Operation \n");
	return 0;
}