#include <stdio.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

void inputCharacter(int karakter, char *string,char *FileName)
{
    
    FILE *fp;

    fp = fopen(FileName, "r");

    int i = 0;
   char input;
    while((input = fgetc(fp))!= EOF){ // melakukan perulangan sampai EOF
        if(isalpha(input)||isdigit(input)){ // karakter yang diinputkan hanya alfabet dan angka
            string[i] = input;
            string[i]= tolower (string[i]);// karakter alfabet diubah seluruhnya ke huruf kecil
            i++;
        }else if(ispunct(input)){// mengganti  tanda baca dengan spasi
            string[i]= 32;
            i++;
        }else{
            string[i]= 32;// selain syarat diatas seluruhnya diubah menjasi spasi
            i++;
        }

        
    }

    

    fclose(fp);
}
