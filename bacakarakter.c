#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

void ReadCharacter(int *karakter,char *FileName)
{
    FILE *fp; 
    fp = fopen(FileName, "r");// membuka file input
    if (fp == NULL)// melakukan penggecekan pada file input
    {
        printf("file input.txt tidak ditemukan\n");
        exit (1);
    }
    
    *karakter=0;
    char huruf;
    int jlhKarakter=0;

    huruf=fgetc(fp);// melakukan perulangan untuk menghitung berapa banyak karakter dalam file input
    while(!feof(fp)){
        
        jlhKarakter++;
        
        huruf=fgetc(fp);
    }
    
    *karakter=jlhKarakter;// memasukkan jumlah karakter yang sudah di cari kedalam variabel  karakter
   
    fclose(fp);// menutup file
}
