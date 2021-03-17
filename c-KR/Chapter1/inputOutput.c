#include <stdio.h>
int main(){
    int c, nl;
    int blank_seq;

    // blank_seq = -1;
    // while((c=getchar()) != EOF) {
    //     if (c==' '){
    //         if (blank_seq != 1){
    //             putchar(c);
    //             blank_seq = 1;
    //         }
    //     }
    //     else {
    //         putchar(c);
    //         blank_seq = 0;
    //     }
    // }


    while((c=getchar())!=EOF){
        if (c=='\t' || c=='\b' || c=='\\'){
            printf("\%c", c);
        }
         
        else putchar(c);
    }
}