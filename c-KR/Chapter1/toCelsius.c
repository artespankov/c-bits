#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20


int main()
{
    float fahr, celsius;
    printf("%6s %6s\n", "t,Fh", "t,C");
    printf("-------------\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f %6.1f\n", fahr, celsius);
    }
}