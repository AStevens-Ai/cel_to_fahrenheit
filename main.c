#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
void main()
{
    printf("-------------------------Cel to Fahr Table------------------------ \n");
    float fahr, celsius;
    fahr = LOWER;
    printf("descendending to ascending order: \n");
    printf("\n");
    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%20.0f %30.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    printf("\n");
    printf("Ascending to descending order: \n");
    printf("\n");
    fahr = UPPER;
    while (fahr >= LOWER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%20.0f %30.1f\n", fahr, celsius);
        fahr = fahr - STEP;
    }

    printf("-------------------------------------------------------------------\n");
}
