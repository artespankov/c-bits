#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(){
    printf("---> INT\n");
    printf("unsigned INT range: %u - %u\n", 0, UINT_MAX);
    printf("signed INT range: %d - %d\n", INT_MIN, INT_MAX);
    printf("\n\n");

    printf("---> CHAR\n");
    printf("bits: %d\n", CHAR_BIT);
    printf("unsigned CHAR range: %u - %u\n", 0, UCHAR_MAX);
    printf("signed CHAR range: %d - %d\n", CHAR_MIN, CHAR_MAX);
    printf("\n\n");

    printf("---> SHORT INT\n");
    printf("unsigned SHORT INT range: %u - %u\n", 0, USHRT_MAX);
    printf("signed SHORT INT range: %d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("\n\n");

    printf("---> LONG INT\n");
    printf("bits: %d\n", LONG_BIT);
    printf("unsigned LONG INT range: %d - %lu\n", 0, ULONG_MAX);
    printf("signed LONG INT range: %ld - %ld\n", LONG_MIN, LONG_MAX);
    printf("\n\n");

    printf("---> LONG LONG INT\n");
    printf("unsigned LONG LONG INT range: %d - %llu\n", 0, ULLONG_MAX);
    printf("signed LONG LONG INT range: %lld - %lld\n", LLONG_MIN, LLONG_MAX);
    printf("\n\n");

}