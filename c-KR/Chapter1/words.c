
#include <stdio.h>
#define SKIP 1 /* inside a word */ 
#define BREAK 0 /* outside a word */
/* count lines, words, and characters in input */ 
int main()
{
    int c, state;

    state = BREAK;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t'){
            if (state != SKIP){
                printf("%s", "\n");
                state = SKIP;
            }
        }
        else{
            putchar(c);
            state = BREAK;
        } 
            
    }
}