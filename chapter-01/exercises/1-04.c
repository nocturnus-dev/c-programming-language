#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 2, ... 50; floating-point version*/

int main()
{
    float celsius, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 50;
    step = 2;
    celsius = lower;
    char celsiusHeader[] = "Celsius";
    char fahrHeader[] = "Fahr";
    printf("%s %s\n", celsiusHeader, fahrHeader);
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}