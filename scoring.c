#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int scoring(char *token){
    int i = 0;
    int skor = 0;
    for(i;i<strlen(token);i++){
        switch (token[i])
        {
        case 'a':
        case 'h':
        case 'n':
            skor+=4;
            break;
        case 'b':
        case 'f':
        case 'l':
        case 'm':
        case 'v':
            skor+=6;
            break;
        case 'c':
        case 'p':
        case 'x':
        case 'z':
            skor+=8;
            break;
        case 'd':
        case 'r':
        case 'u':
        case '5':
            skor+=5;
            break;
        case 'e':
            skor+=1;
        case 'g':
        case 'k':
        case 'w':
        case 'y':
        case '4':
        case '6':
            skor+=7;
            break;
        case 'i':
            skor+=2;
            break;
        case 'j':
        case 'q':
            skor+=10;
            break;
        case 'o':
        case '3':
        case '7':
            skor+=9;
            break;
        case 's':
        case 't':
            skor+=3;
            break;
        case '2':
        case '8':
            skor+=11;
            break;
        case '1':
        case '9':
            skor+=13;
            break;
        case '0':
            skor+=15;
            break;





        

        
        }
    }
    return skor;

}