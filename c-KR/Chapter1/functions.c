#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void fromFahrToCelsius(int, int, int);

void fromFahrToCelsius(int upper, int lower, int step){
    float fahr, celsius;
        printf("%6s %6s\n", "t,Fh", "t,C");
        printf("-------------\n");
        for (fahr = upper; fahr >= lower; fahr -= step){
            celsius = (5.0 / 9.0) * (fahr - 32.0);
            printf("%6.0f %6.1f\n", fahr, celsius);
        }
}

int main()
{
    fromFahrToCelsius(UPPER, LOWER, STEP);
}