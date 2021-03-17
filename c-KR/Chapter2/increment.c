#include <stdio.h>

void squeeze(char s[], char s1[]);

void squeeze(char s[], char s1[]){
    int i,j, ii;
    int insert;
    for (i=j=0; s[i] != '\0'; i++){
        insert = 1;
        for (ii=0; s1[ii]!= '\0'; ii++){
            if (s[i] == s1[ii])
                insert = 0; 
        }
        if (insert != 0)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main(){
    char initial[] = "jhghghhvhgvghvhvhg";
    printf("%s\n", initial);
    squeeze(initial, "gjh");
    printf("%s\n", initial);
}   