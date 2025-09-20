/*** NumTypes Function Definitions ***/

//Preprocessing Directives:

//Header Guards

#ifndef NumTypes_H
#define NumTypes_H
#pragma once
#include<stdio.h>
#endif

//Function Definitions:
int IsPrime(long long num);
int IsComposite(long long num);
void IsEven(long long num);
void IsOdd(long long num);
void IsPalindromeNum(long long num);
void IsArmstrong(long long num);
void IsDisarium(long long num);

//Main Function:
int main()
{
	IsArmstrong(153);

	return 0;
}

//Function Definitions:

//IsPrime:
//This Function checks whether a number is prime or not.

int IsPrime(long long num)
{
	int i;
	if(num==1)	//Checking if the number is 1.
	{
		printf("\n%lld is neither a Prime nor a Composite number.", num);
		return 0;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("\n%lld is not a Prime Number.", num);
			return 0;
		}
	}
	printf("\n%lld is a Prime Number", num);
	return 0;
}

//IsComposite:
//This function checks whether a number is composite or not.

int IsComposite(long long num)
{
	int i;
	if(num==1)	//Checking if the number is 1.
	{
		printf("\n%lld is neither a Composite nor a Prime number.", num);
		return 0;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("\n%lld is a Composite Number.", num);
			return 0;
		}
	}
	printf("\n%lld is not a Composite Number.", num);
	return 0;
}

//IsEven:
//This function checks whether the number is even or not.

void IsEven(long long num)
{
	if(num%2==0)
	{
		printf("\n%lld is an Even Number.", num);
	}
	else
	{
		printf("\n%lld is not an Even Number.", num);
	}
}

//IsOdd:
//This function checks whether the number is odd or not.

void IsOdd(long long num)
{
	if(num%2==0)
	{
		printf("\n%lld is not an Odd Number.", num);
	}
	else
	{
		printf("\n%lld is an Odd Number.", num);
	}
}

//IsPalindromeNum:
//This function checks whether a number is palindrome or not.

void IsPalindromeNum(long long num)
{
	int no=num, Reverse=0;
	while(no!=0)
	{
		Reverse=(Reverse*10)+(no%10);
		no/=10;
	}
	if(Reverse==num)
	{
		printf("\n%lld is a Palindrome Number.", num);
	}
	else
	{
		printf("\n%lld is not a Palindrome Number.", num);
	}
}

//IsArmstrong:
//This function checks whether a number is Armstrong Number or not.

void IsArmstrong(long long num)
{
	int n=0, no=num, k;
	while(no!=0)
	{
		k=no%10;
		n+=(k*k*k);
		no/=10;
	}
	if(num==n)
	{
		printf("\n%lld is an Armstrong Number.", num);
	}
	else
	{
		printf("\n%lld is not an Armstrong Number.", num);
	}
}
