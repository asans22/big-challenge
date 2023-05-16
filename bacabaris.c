#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

void ReadLine(int *baris, int *kolom,int *karakter)
{
    FILE *fp;
    fp = fopen("./assets/input.txt", "r");
    if (fp == NULL)
    {
        printf("file input.txt tidak ditemukan\n");
        exit (1);
    }
    
    int jlhBaris=0;
    char huruf;
    huruf=fgetc(fp);
    while(!feof(fp)){
        if(huruf=='\n'){
            jlhBaris++;
        }
        huruf=fgetc(fp);
    }
    jlhBaris+=1;
    *baris=jlhBaris;

    fseek(fp,0,SEEK_SET);
    int jlhKolom=0;
    char huruf_;

    *kolom=0;
    huruf_=fgetc(fp);
    while(!feof(fp)){
        if(huruf_=='\n'){
            ++jlhKolom;
            if(jlhKolom>*kolom){
                *kolom=jlhKolom;
            }
            jlhKolom=0;
            huruf_=fgetc(fp);
        }
        jlhKolom++;
        huruf_=fgetc(fp);
        if(huruf_==EOF){
            if(jlhKolom>*kolom){
                *kolom = jlhKolom;
            }
        }
    }
    fseek(fp,0,SEEK_SET);
    *karakter=0;
    char _huruf;
    int jlhKarakter=0;

    _huruf=fgetc(fp);
    while(!feof(fp)){
        
            jlhKarakter++;
        
        _huruf=fgetc(fp);
    }
    
    *karakter=jlhKarakter;
   
    fclose(fp);
}
