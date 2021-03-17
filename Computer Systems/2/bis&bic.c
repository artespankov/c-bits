#include <stdio.h>

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m);
int bic(int x, int m);



/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}


/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) {
    int result = bis(bic(x, bis(x, bic(x, y))), bic(x, bis(bic(y, x), y)));
    return result;
}

int main(){
    int x = 0x66;
    int y = 0x39;
    printf("%b \n", x&!y);
     printf("%b \n", x&&~y);

}