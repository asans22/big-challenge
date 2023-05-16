#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void readBinary(int kata, rb baca[]){
    int n;
    FILE *fp = fopen("./assets/hasil.bin","rb");
    if(fp == NULL){
        printf("File Tidak Ditemukan\n");
        exit(1);
    }

    do{
    printf("input nilai n dimana (0<n<=75): ");
    scanf(" %d",&n);

    if(n<0 ||n>75){
        printf("input Nilai dari 1-75 saja\n");

    }

    }while(n<0 || n>75);

    for(int p = 0;p<kata;p++){
        fread(&baca[p].point,sizeof(baca[p].point),1,fp);
        fread(baca[p].kata,sizeof(baca[p].kata),1,fp);
        fread(&baca[p].panjangKata,sizeof(baca[p].panjangKata),1,fp);
    }


    
    int i;
    int j=0;
    int k;
    int a=0;
    for(i=0;i<n;i++){
    for (j=a; j < kata; j++)
    {
        printf("%.1f [%s] [%d] ", baca[j].point, baca[j].kata, baca[j].panjangKata);
        for (k = j + 1; k < kata; k++)
        {
            if (baca[j].point == baca[k].point)
            {
                printf("[%s] [%d] ", baca[k].kata, baca[k].panjangKata);
            }
            else{
                a=k;
                break;
            }
           
        }
        printf("\n");
        break;
    }
    }
}