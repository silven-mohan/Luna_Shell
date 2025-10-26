/* NumTypes Series */

/*
 * This program has the definitions of functions which are used to print the series of specified number type.
*/

#include"includes/NumTypes.h"

//Function Definitions:

//Prime():
//This function is used to print the first n Prime Numbers.

void Prime(long long int n)
{
	num=2, count=0;
	printf("\nFirst %lld  Prime Numbers:\n", n);
	printf("     ----------          \n");
	while(count!=n)
	{
		int flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;	//Not Prime.
			}
		}
		if(flag==0)	//Prime
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
}

//Composite():
//This function is used to print the first n Composite Numbers.

void Composite(long long int n)
{
	num=2, count=0;
	printf("\nFirst %lld Composite Numbers:\n",n);
	printf("   --------------        \n");
	while(count!=n)
	{
		int flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;		//Composite.
				break;
			}
		}
		if(flag==1)
		{
			printf("%lld ", num);
		        count++;	
		}
		num++;
	}
	printf("\n");
}

//Even():
//This function is used to print the first n Even Numbers.

void Even(long long int n)
{
	printf("\nFirst %lld Even Numbers:", n);
	printf("\n    ------------      \n");
	num=0, count=0;
	while(count!=n)
	{
		printf("%lld ", num);
		num+=2;
		count++;
	}
	printf("\n");
}

//Odd():
//This function is used to print the first n Odd Numbers.

void Odd(long long int n)
{
	printf("\nFirst %lld Odd Numbers:", n);
	printf("\n    ------------     \n");
	num=1, count=0;
	while(count!=n)
	{
		printf("%lld ", num);
		num+=2;
		count++;
	}
	printf("\n");
}

//Natural():
//This function is used to print the first n Natural Numbers.

void Natural(long long int n)
{
	printf("\nFirst %lld Natural Numbers:", n);
	printf("\n    ---------------      \n");
	for(i=1;i<=n;i++) { printf("%lld ", i); }
	printf("\n");
}

//Whole():
//This function is used to print the first n Whole Numbers.

void Whole(long long int n)
{
	printf("\nFirst %lld Whole Numbers:",n);
	printf("\n    -------------       \n");
	for(i=0;i<=n;i++) { printf("%lld ", i); }
	printf("\n");
}

//Palindrome():
//This function is used to print the first n Palindrome Numbers.

void Palindrome(long long int n)
{
	printf("\nFirst %lld Palindrome Numbers:", n);
	printf("\n    -----------------        \n");
	num=0, count=0;
	long long int no, rev;
	while(count!=n)
	{
		if(num<10) { printf("%lld ", num); }
		else
		{
			rev=0, no=num;
			while(no!=0)
			{
				rev=(rev*10)+(no%10);
				no/=10;
			}
			if(rev==num)
			{
				printf("%lld ", num);
			}
		}
		num++;
		count++;
	}
	printf("\n");
}

//Armstrong():
//This function is used to print the first n Armstrong Numbers.

void Armstrong(long long int n)
{
	printf("\nFirst %lld Armstrong Numbers:", n);
	printf("\n      ----------------        \n");
	count=0, num=0;
	long long int sum=0, no;
	while(count!=n)
	{
		if(num<10) { printf("%lld ", num); }
		else
		{
			no=num, sum=0;
			while(no!=0)
			{
				sum=(sum)+((no%10)*(no%10)*(no%10));
				no/=10;
			}
			if(sum==num)
			{
				printf("%lld ", num);
			}
		}
		num++;
		count++;
	}
	printf("\n");
}

//Disarium():
//This function is used  to print the first n Disarium Numbers.

void Disarium(long long int n)
{
	long long int dis[20]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 89, 135, 175, 518, 598, 1306, 1676, 2427, 2646798};
	if(n>18)
	{
		printf("\nThere are only 18 known Disarium Numbers");
		n=18;
	}
	printf("\nFirst %lld Disarium Numbers:", n+1);
	printf("\n         -------------      \n");
	for(i=0;i<=n;i++) { printf("%lld ", dis[i]); }
	printf("\n");
}

//Strong():
//This function is used to print the first n Strong Numbers.

void Strong(long long int n)
{
	num=0, count=0;
	long long int sum, no;
	printf("\nFirst %lld Strong Numbers:", n);
	printf("\n       ------------        \n");
	while(count!=n)
	{
		no=num, sum=0;
		if(num<3)
		{
			printf("%lld ", num);
			count++;
		}
		else
		{
			while(no!=0)
			{
				sum+=factorial(no%10);
				no/=10;
			}
			if(sum==num)
			{
				printf("%lld ", num);
				count++;
			}
		}
		num++;
	}
}

//Spy():
//This function is used to print the first n Spy Numbers.

void Spy(long long int n)
{
	long long int sum, mult, no;
	count=0, num=0;
	printf("\nFirst %lld Spy Numbers:", n);
	printf("\n      -----------       \n");
	while(count!=n)
	{
		sum=0, mult=1, no=num;
		if(num<10)
		{
			printf("%lld ", num);
		}
		else
		{
			while(no!=0)
			{
				sum+=(no%10);
				mult*=(no%10);
				no/=10;	
			}
			if(sum==mult)
			{
				printf("%lld ", num);
				count++;
			}
		}
		num++;
	}
	printf("\n");	
}

//Perfect():
//This function is used to print the first n Perfect Numbers.

void Perfect(long long int n)
{
	count=0, num=0;
	long long int sum;
	printf("\nFirst %lld Perfect Numbers:");
	printf("\n        --------------      \n");
	while(count!=n)
	{
		sum=0;
		for(i=1;i<=num/2;i++)
		{
			if(num%i==0)
			{
				sum+=i;
			}
		}
		if(sum==num)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
}

//Duck():
//This function is used to print the first n Duck Numbers.

void Duck(long long int n)
{
	count=0, num=0;
	while(count!=n)
	{
		if(num%10==0||num%100<10)
		{
			if(num%100>0 || num%100<10)
			{
				printf("%lld ", num);
				count++;
			}
		}
		num++;
	}
	printf("\n");
}

//Automorphic():
//This function is used to print the first n Automorphic Numbers.

void Automorphic(long long int n)
{
	count=0, num=0;
	long long int sq, temp, digits;
	printf("\nFirst %lld Automorphic Numbers:", n);
	printf("\n        -------------          \n");
	while(count!=n)
	{
		sq=num*num;
		temp=sq, digits=0;
		//Count the no. of digits.
		while(temp!=0)
		{
			temp/=10;
			digits++;
		}
		//Check if Automorphic or not.
		for(i=1;i<=digits;i++)
		{
			if(num == sq % PowNum(10, i))
			{
				printf("%lld ", num);
				count++;
				break;
			}
		}
		num++;
	}
	printf("\n");
}

//Niven():
//This function is used to print the first n Niven Numbers.

void Niven(long long n)
{
	count=0, num=1;
	long long sum, temp;
	printf("\nFirst %lld Niven Numbers are:", n);
	printf("\n       ---------------      \n");
	while(count!=n)
	{
		sum=0, temp=num;
		while(temp!=0)
		{
			sum+=(temp%10);
			temp/=10;
		}
		if(num%sum==0)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
}
