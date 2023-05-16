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

void input_character(int baris, int kolom, int karakter, char *string);
void ReadLine(int *baris, int *kolom, int *karakter);
void token(words hasil[], char *string);
void CountWord(int *kata, char *string);
int scoring(char *token);
void bubblesort(words hasil[],int kata);
void writeBinary(words hasil[],int kata);
void readBinary(int kata, rb baca[]);