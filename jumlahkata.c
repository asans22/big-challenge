#include <stdio.h>
#include <ctype.h>
#include "header.h"


void CountWord(int *kata,char *string){
    int a =0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i] == ' ' ){
            a++;
            if(string[i+1]== ' '){
                i++;
                if(string[i+1]== ' '){
                    i++;
                }
            }
        }
    }  
    a+=1;
    
*kata = a;
}