/*
This code takes the user input from the keyboard, 
converts the input to binary system, and then writes it to the disk as both .TXT and .BIN.
*/
#include "stdio.h"
#include "string.h"
void binarytext (char text[]) {
    int wordInt = strlen(text);

    for (int i = 0; i < wordInt; i++){
        char chars = text[i];
        for (int j = 7; j >= 0; j--){
            int bit = (chars >> j) &1;
            printf("%d",bit);
        }
        printf(" ");
    }
}

int main(){
    char text[100];
    printf("ENTER A SENTENCE: ");
    fgets(text, sizeof(text),stdin);
    printf("BINARY = \n");
    binarytext(text);



    //FOR  SAVE TEXT OR .BIN FİLE USE THİS ONE;
FILE *file1;
file1 = fopen("new.txt", "w");
fprintf(file1, "%d", text);
    int section1 = 100;

fprintf(file1, "\n\n\n\t%d", section1
    )   ;
fclose(file1
);
    //NOW
    //BIN
    FILE *filebin;
    filebin = fopen("BIN.bin",  "w");
      fprintf(filebin, "\n\n\n\t%d", section1
    )   ;
fclose(filebin);

        return 0;

}