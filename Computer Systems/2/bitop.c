#include <stdio.h>


void bitOP(x){
    int mask = 0xFF;
    printf("A: %x\n", (x & mask));
    printf("B: %x\n", (~mask ^ x));
    printf("C: %x\n", (x | mask));
}

int main(){
    int x = 0x87654321;
    bitOP(x);
}