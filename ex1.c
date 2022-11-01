// C program to illustrate Pointers
#include <stdio.h>

void pointer()
{
	int var = 20;
	int* ptr;
	ptr = &var;

	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

int main()
{
	pointer();
	return 0;
}


OUTPUT 

Value at ptr = 0x7ffd15b5deec 
Value at var = 20 
Value at *ptr = 20 
