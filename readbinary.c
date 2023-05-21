#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void readBinary(int kata, rb baca[])
{
    int n;
    FILE *fp = fopen("./assets/hasil.bin", "rb");//membuka file binary dengan baca binary
    if (fp == NULL)// melakukan pengecekan
    {
        printf("File Tidak Ditemukan\n");
        exit(1);
    }

    do // melakukan perulangan setiap use memilih ngka 2
    {
        printf("input nilai n dimana (0<n<=75): ");
        scanf(" %d", &n);

        if (n < 0 || n > 75)
        {
            printf("input Nilai dari 1-75 saja\n");
        }

    } while (n <= 0 || n > 75);// jika nilai lebih kecil sama dengan nol dan lebih besar dari 75 maka melakukan perulangan

    for (int p = 0; p < kata; p++)//nelakukan fread sebanyak kata
    {
        fread(&baca[p].point, sizeof(baca[p].point), 1, fp);
        fread(baca[p].kata, sizeof(baca[p].kata), 1, fp);
        fread(&baca[p].panjangKata, sizeof(baca[p].panjangKata), 1, fp);
    }

    int p;
    int q = 0;
    int r;
    
    for(p=0;p<n;p++){//melakukan print sebanyak nilai yang dimasukkan user
        for(q;q<kata;q++){
            printf("[%.1f] {%s (%d)",baca[q].point,baca[q].kata,baca[q].panjangKata);
            for(r=q+1;r<kata;r++){//perulangan untuk mencari nilai yang sama
                if(baca[q].point==baca[r].point){
                    printf(", %s (%d)",baca[r].kata,baca[r].panjangKata);// memprint kata dan panjangkata dengan nilai yang sama
                }
                else{
                    q=r;// jika tidak ada nilai yang sama maka nilai q = r
                    break;
                }
            }
            printf("}\n");
            break;
    }
    }

    printf("\n");
    
}
