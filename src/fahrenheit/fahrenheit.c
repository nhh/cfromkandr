#include "stdio.h"

void PrintFahrenheit() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void PrintFahrenheitWithForLoop() {
    for(int fahr = 0; fahr <= 300; fahr = fahr+20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
}
