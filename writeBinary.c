#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void writeBinary(words hasil[],int kata){

FILE *fp = fopen("./assets/hasil.bin","wb");

for(int i=0;i<kata;i++){
    fwrite(&hasil[i].point,sizeof(hasil[i].point),1,fp);
    fwrite(hasil[i].kata,sizeof(hasil[i].kata),1,fp);
    fwrite(&hasil[i].panjangKata,sizeof(hasil[i].panjangKata),1,fp);
    
}

}