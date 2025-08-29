#include <stdio.h>
int main() 
{
    float fractional_number;
    printf("Enter a fractional number: ");
    scanf("%f", &fractional_number)
    printf("The number in 2-digit decimal format is: %.2f\n", fractional_number);
    return 0;
}