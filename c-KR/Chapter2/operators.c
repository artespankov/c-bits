#include <stdio.h>

int lim = 100;
int i;
char c;
char s[1000];


int main(){
    int go = i < lim-1;
    while(go != 0){
        if (i >= lim-1){
            go = 0;
        } 
        else if ((c=getchar()) == '\n') {
            go = 0;
        }
        else if (c == EOF){
            go = 0;
        } 
        s[i] = c;
        ++i;
    }
    printf("%s", s);
}

