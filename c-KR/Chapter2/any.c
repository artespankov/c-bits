#include <stdio.h>

int any(char s[], char s1[]);

int any(char s1[], char s2[]){
    int i,j, ii;
    int occurence = -1;
    for (i=j=0; s1[i] != '\0'; i++){
        if (occurence == -1){
            for (ii=0; s2[ii]!= '\0'; ii++){
                if (s1[i] == s2[ii])
                    occurence = i; 
            }
        }
    }
    return occurence;
}

int main(){
    char initial[] = "jhghghhvhgvghvhvhg";
    printf("%s\n", initial);
    int res = any(initial, "1v");
    printf("%d\n", res);
}   