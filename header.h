typedef struct word
{
    char kata[30];
    double point;
    int panjangKata;
} words;

typedef struct readbinary{
    char kata[30];
    double point;
    int panjangKata;
}rb;

void ReadCharacter(int *karakter,char *FileName);
void inputCharacter(int karakter, char *string,char *FileName);
void token(words hasil[], char *string);
void CountWord(int *kata, int karakter, char *string);
int scoring(char *token);
void bubblesort(words hasil[],int kata);
void writeBinary(words hasil[],int kata);
void readBinary(int kata, rb baca[]);
