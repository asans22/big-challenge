#include <stdio.h>
#include <ctype.h>
#include "header.h"
#include <string.h>

void input_character(int baris, int kolom, int karakter, char *string)
{
    char array[baris][kolom];
    FILE *fp;

    fp = fopen( "./assets/input.txt", "r");

    int i = 0;
    
    while (fgets(array[i], kolom * sizeof(int), fp) != NULL)
    {
        i++;
    }
    int z = 0;

    for (int j = 0; j < baris; j++)
    {
        for (int k = 0; k < kolom; k++)
        {
            if (array[j][k] == '\0')
            {
                break;
            }else if (isalpha(array[j][k]) || isdigit(array[j][k]) )
            {
                string[z] = array[j][k];
                string[z] = tolower(string[z]);
                z++;
            }else 
            {
                string[z] =' '; 
                z++;
            }
        }
    }

    fclose(fp);
}