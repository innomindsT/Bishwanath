// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	int v[3] = { 10, 100, 200 };
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = v;

	for (int i = 0; i < 3; i++) {
		printf("Value of *ptr = %d\n", *ptr);
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}
	return 0;
}

OUTPUT

Value of *ptr = 10
Value of ptr = 0x7ffe64a94c4c

Value of *ptr = 100
Value of ptr = 0x7ffe64a94c50

Value of *ptr = 200
Value of ptr = 0x7ffe64a94c54


