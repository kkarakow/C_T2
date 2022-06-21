#include<stdio.h> 
#include<stdlib.h> 
#include "node.h" 
#include "stack.h"

	int main()
	{
		push(1);
		push(2);
		push(3);
		printf("\nStack size is: ");
		getStackSize();
		printf("\nThe skipped number is :");
		skipPop(2);
		return 0;
	}
