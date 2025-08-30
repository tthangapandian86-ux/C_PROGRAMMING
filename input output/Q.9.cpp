#include<stdio.h>
int main()
{
    unsigned int octalvalue;
	printf("Enter a octal number(e.g.,1B3C):");
	scanf("%o", &octalvalue);
	printf("integer value: %u\n", octalvalue);
	return 0;
}