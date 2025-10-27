/* NumTypes Series */

/*
 * This program has the definitions of functions which are used to print the series of specified number type.
*/

#include"includes/NumTypes.h"

//Function Definitions:

//Prime():
//This function is used to print the first n Prime Numbers.

int Prime(long long int n)
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
	return 1;
}

//Composite():
//This function is used to print the first n Composite Numbers.

int Composite(long long int n)
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
	return 1;
}

//Even():
//This function is used to print the first n Even Numbers.

int Even(long long int n)
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
	return 1;
}

//Odd():
//This function is used to print the first n Odd Numbers.

int Odd(long long int n)
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
	return 1;
}

//Natural():
//This function is used to print the first n Natural Numbers.

int Natural(long long int n)
{
	printf("\nFirst %lld Natural Numbers:", n);
	printf("\n    ---------------      \n");
	for(i=1;i<=n;i++) { printf("%lld ", i); }
	printf("\n");
	return 1;
}

//Whole():
//This function is used to print the first n Whole Numbers.

int Whole(long long int n)
{
	printf("\nFirst %lld Whole Numbers:",n);
	printf("\n    -------------       \n");
	for(i=0;i<=n;i++) { printf("%lld ", i); }
	printf("\n");
	return 1;
}

//Palindrome():
//This function is used to print the first n Palindrome Numbers.

int Palindrome(long long int n)
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
	return 1;
}

//Armstrong():
//This function is used to print the first n Armstrong Numbers.

int Armstrong(long long int n)
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
	return 1;
}

//Disarium():
//This function is used  to print the first n Disarium Numbers.

int Disarium(long long int n)
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
	return 1;
}

//Strong():
//This function is used to print the first n Strong Numbers.

int Strong(long long int n)
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
	printf("\n");
	return 1;
}

//Spy():
//This function is used to print the first n Spy Numbers.

int Spy(long long int n)
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
	return 1;
}

//Perfect():
//This function is used to print the first n Perfect Numbers.

int Perfect(long long int n)
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
	return 1;
}

//Duck():
//This function is used to print the first n Duck Numbers.

int Duck(long long int n)
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
	return 1;
}

//Automorphic():
//This function is used to print the first n Automorphic Numbers.

int Automorphic(long long int n)
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
	return 1;
}

//Niven():
//This function is used to print the first n Niven Numbers.

int Niven(long long n)
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
	return 1;
}

//Emirp():
//This function is used to print the first n Emirp Numbers.

int Emirp(long long n)
{
	count=0, num=0;
	int flag;
	long long int rev, no;
	printf("\nFirst %lld Emirp Numbers:", n);
	printf("\n        -----------       \n");
	while(count!=n)
	{
		flag=0, rev=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		no=num;
		while(no!=0)
		{
			rev=(rev*10)+(no%10);
			no/=10;
		}
		if(num==rev)
		{
			flag=1;
		}
		for(i=2;i<=rev/2;i++)
		{
			if(rev%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 1;
}

//TwistedPrimes():
//This function is used to print the first n Twisted Prime Numbers.

int TwistedPrimes(long long n)
{
	count=0, num=2;
	int flag;
	long long rev, no;
	printf("\nFirst %lld Twisted Prime Numbers:", n);
	printf("\n           ------------          \n");
	while(count!=n)
	{
		flag=0, rev=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		no=num;
		while(no!=0)
		{
			rev=(rev*10)+(no%10);
			no/=10;
		}
		for(i=2;i<=rev/2;i++)
		{
			if(rev%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 1;
}

//Abundant():
//This function is used to print the first n Abundant Numbers.

int Abundant(long long n)
{
	count=0, num=0;
	long long int sum;
	printf("\nFirst %lld Abundant Numbers:", n);
	printf("\n         --------           \n");
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
		if(sum>num)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 1;
}

//Deficient():
//This function is used to print the first n Deficient Numbers.

int Deficient(long long n)
{
	count=0, num=0;
	long long int sum;
	printf("\nFirst %lld Deficient Numbers:", n);
	printf("\n         ----------          \n");
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
		if(sum<num)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 1;
}

//SophieGermainPrimes():
//This function is used to print the first n Sophie Germain Prime Numbers.

int SophieGermainPrimes(long long n)
{
	count=0, num=2;
	int flag;
	printf("\nFirst %lld Sophie Germain Prime Numbers:", n);
	printf("\n            -----------                 \n");
	while(count!=n)
	{
		flag=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			for(i=2;i<=((2*(num)+1)/2);i++)
			{
				if(((2*(num)+1))%i==0)
				{
					flag++;
					break;
				}
			}
		}
		if(flag==0)
		{
			printf("%lld ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 1;
}
