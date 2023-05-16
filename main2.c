#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

int main()
{
    system("cls");

    int baris = 0;
    int kolom = 0;
    int karakter = 0;
    int kata = 0;

    ReadLine(&baris, &kolom, &karakter);
    char string[karakter];

    // printf("%d %d %d",baris,kolom,karakter);

    input_character(baris, kolom, karakter, string);

    // for(int i=0; i<karakter;i++){
    //  printf("%c",string[i]);
    // }

    CountWord(&kata, string);

    //  printf("\n%d",kata);

    words hasil[kata];

    token(hasil, string);

    bubblesort(hasil, kata);

    int pilihan;

    do
    {
        printf("****************MENU*****************\n");
        printf("=====================================\n");
        printf("1. simpan file input ke file binary\n");
        printf("2. Tampilkan data dari file binary\n");
        printf("3. Keluar dari program\n");
        printf("\n==================================\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            writeBinary(hasil, kata);
        }
        if (pilihan == 2)
        {
            writeBinary(hasil, kata);
            rb baca[kata];
            readBinary(kata, baca);
        }
        if (pilihan == 3)
        {
            break;
        }
    } while (pilihan != 3);
}