#include <stdio.h>

int main()
{
    printf("Hello!\n");

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    //fahr = lower;
    //while(fahr<=upper)
    for(fahr = 0; fahr <=300; fahr+=20)
    {
        celsius = (5.0/9.0) *(fahr-32);
        printf("%3.0f \t%6.1f\n", fahr, celsius);
        fahr+=step;
    }
}
