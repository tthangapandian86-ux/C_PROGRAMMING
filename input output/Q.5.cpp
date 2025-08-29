#include <stdio.h>

int main() 
{
    double fractional_number;
    printf("Enter a fractional number: ");
    scanf("%lf", &fractional_number);
    printf("The fractional number is: %f\n", fractional_number);
    printf("The fractional number (2 decimal places): %.2f\n", fractional_number);
     return 0;
}