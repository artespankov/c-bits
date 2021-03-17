#include <stdio.h>

int main(){
    int c;
    int length=20;
    int max = -1000;
    int nletters[length];

    int counter = 0;
    int num = 0;

    for (int i=0; i<=length; ++i){
        nletters[i] = 0;
    }

    while ((c=getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            num = nletters[counter] + 1;
            if (num > max)
                max = num;
            nletters[counter] = num;
            counter = 0;
        } else {
            counter +=1;
        }
    }
    printf("%s\n", " __ Letters, n");
    for (int i=length; i>0; --i){
        printf("%3.1d ", i);
        for (int j=1; j<=nletters[i]; ++j)
            printf("%2s ", "#");
        printf("%s", "\n");
    }
    printf("%4s", "");
    for (int i=1; i<=max; ++i)
        printf("%2.0d ", i);

    printf("%s\n", "| Words, m");
}