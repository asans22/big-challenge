#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

int main()
{
    system("cls"); // untuk membersihkan terminal setiap memulai program

    char FileName[20];
    printf("ketik nama file input : ");// memasukkan  file input 
    scanf("%s",FileName);
    //variabel untuk menghitung banyak karakter dan kata
    int karakter = 0;
    int kata = 0;

    ReadCharacter(&karakter,FileName);   // fungsi untuk menghitung jumlah karakter pada file input
    char string[karakter];// array untuk menyimpan file input

    // melakukan inputan pada array sebanyak karakter
    inputCharacter(karakter, string,FileName);

    // menghitung jumlah kata yang ada
    CountWord(&kata,karakter,string);

   
    // variabel menggunakan tipe data yang telah dibuat
    words hasil[kata];
    //melakukan tokenisasi
    token(hasil, string);
    // mengurutkan poin dan kata
   bubblesort(hasil, kata);

    int pilihan;// variabel menampung pilihan user

    do// melakukan perulangan 
    {
        printf("****************MENU*****************\n");
        printf("=====================================\n");
        printf("1. simpan file input ke file binary\n");
        printf("2. Tampilkan data dari file binary\n");
        printf("3. Keluar dari program\n");
        printf("\n==================================\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 1)// jika memilih satu maka file input akan menulis binary
        {
            writeBinary(hasil, kata);
        }
        if (pilihan == 2)// akan menulis binary dan membaca
        {
            writeBinary(hasil, kata);
            rb baca[kata];
            readBinary(kata, baca);
        }
        if (pilihan == 3)// keluar dari program
        {
            break;
        }
    } while (pilihan != 3);

    return 0;
}
