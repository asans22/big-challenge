#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void token(words hasil[], char *string){
   int i=0;
   char *token;
    token = strtok(string," ");

    while(token != NULL){
        strcpy(hasil[i].kata,token);
        hasil[i].point = scoring(token);
        hasil[i].panjangKata = strlen(token);
        i++;
        token =strtok(NULL," ");
    }

}