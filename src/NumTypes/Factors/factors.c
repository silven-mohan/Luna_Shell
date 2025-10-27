//Factors():
//This program is used to print the factors of a number.

//Preprocessing Directives:
#include "../src/includes/NumTypes.h"

int factors(long long num)
{
	printf("\nFactors of %lld are: ", num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("%lld ", i);
		}
	}
	printf("%lld\n", num);
	return 1;
}
