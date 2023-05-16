#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void bubblesort(words hasil[], int kata)
{
    for (int i = 0; i < kata; i++) //mengurutkan berdasarkan point besar ke kecil
    {
        for (int j = 0; j < kata - i - 1; j++)
        {
            if (hasil[j].point < hasil[j + 1].point)
            {
                words temp = hasil[j];
                hasil[j] = hasil[j + 1];
                hasil[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < kata; i++) // mengurutkan kata dengan point yang sama berdasarkan abjad
    {
        for (int j = 0; j < kata - i - 1; j++)
        {
            if ((hasil[j].point == hasil[j + 1].point) && strcmp(hasil[j].kata, hasil[j + 1].kata) > 0) //jika j labih besar dengan j+1 maka nilainya akan positif dan urutannya akan berbalik
            {
                words temp = hasil[j];
                hasil[j] = hasil[j + 1];
                hasil[j + 1] = temp;
            }
        }
    }

    

}