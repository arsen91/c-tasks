#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int toCelcius(int n);

int main()
{
    int fahr;

    fahr = LOWER;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("Far - %d, Cel - %d\n", fahr, toCelcius(fahr));
    }

    return 0;
}

int toCelcius(int fahr) {
    return 5 * (fahr-32) / 9;
}