// C program to demonstrate use of * for pointers
#include <stdio.h>

int main()
{
	
	int Var = 10;
	int* ptr = &Var;

	
	 printf("Value of Var = %d\n", *ptr);
         printf("Address of Var = %p\n", ptr);

	
	*ptr = 20; // Value at address is now 20
	printf("After doing *ptr = 20, *ptr is %d\n", *ptr);

	return 0;
}

OUTPUT 

Value of Var = 10
Address of Var = 0x7ffe58fcfd5c
After doing *ptr = 20, *ptr is 20
