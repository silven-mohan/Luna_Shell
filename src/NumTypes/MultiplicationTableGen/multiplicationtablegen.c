//Multiplication Table Generator:
//This program is used to print the multiplication table of any number upto specified number of steps.

//Preprocessing Directives:
#include "../src/includes/NumTypes.h"

int MultiplicationTableGen(long long num, long long steps)
{
	printf("\nMultiplication Table of %lld is:", num);
	printf("\n          ----------------     \n");
	for(i=1;i<=steps;i++)
	{
		printf("\n%d x %d = %d", num, i, num*i);
	}
	printf("\n");
	return 1;
}
