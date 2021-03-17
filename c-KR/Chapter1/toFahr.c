#include <stdio.h>
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -17.8;
    upper = 148.9;
    step = 11.1;

    celsius = lower;
    printf("%6s %6s\n", "t,C", "t,Fh");
    printf("-------------\n");
    while(celsius <= upper){
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        // celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}