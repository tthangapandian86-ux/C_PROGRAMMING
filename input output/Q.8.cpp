#include<stdio.h>
int main()
{
	unsigned int hexvalue;
	printf("Enter a hexadecimal number(e.g.,1B3C):");
	scanf("%x", &hexvalue);
	printf("integer value: %u\n", hexvalue);
	return 0;
    
}