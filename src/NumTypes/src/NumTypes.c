/*** NumTypes Function Definitions ***/

/*
 * This program contains the definitions of the functions which are used to check whether they are spefific numbers or not.
*/

#include"includes/NumTypes.h"

//Global Declarations:
long long int i, count=1, num;

//Function Definitions:

//IsPrime:
//This Function checks whether a number is prime or not.
//Prime Numbers are the numbers that have 1 and itself as factors.

int IsPrime(long long num)
{
        int i;
        if(num==1)        //Checking if the number is 1.
        {
                printf("\n%lld is neither a Prime nor a Composite Number.\n", num);
                return 0;
        }
        for(i=2;i<=num/2;i++)
        {
                if(num%i==0)
                {
                        printf("\n%lld is not a Prime Number.\n", num);
                        return 0;
                }
        }
        printf("\n%lld is a Prime Number.\n", num);
        return 1;
}

//IsComposite:
//This function checks whether a number is composite or not.
//Composite Numbers are the numbers that are not prime.

int IsComposite(long long num)
{
        int i;
        if(num==1)        //Checking if the number is 1.
        {
                printf("\n%lld is neither a Composite nor a Prime Number.\n", num);
                return 0;
        }
        for(i=2;i<=num/2;i++)
        {
                if(num%i==0)
                {
                        printf("\n%lld is a Composite Number.\n", num);
                        return 0;
                }
        }
        printf("\n%lld is not a Composite Number.\n", num);
        return 0;
}

//IsEven:
//This function checks whether the number is even or not.
//Even Numbers are the numbers that are divisible by 2.

void IsEven(long long num)
{
        if(num%2==0)
        {
                printf("\n%lld is an Even Number.\n", num);
        }
        else
        {
                printf("\n%lld is not an Even Number.\n", num);
        }
}

//IsOdd:
//This function checks whether the number is odd or not.
//Odd Numbers are the numbers that are not divisble by 2.

void IsOdd(long long num)
{
        if(num%2==0)
        {
                printf("\n%lld is not an Odd Number\n.", num);
        }
        else
        {
                printf("\n%lld is an Odd Number.\n", num);
        }
}

//IsPalindromeNum:
//This function checks whether a number is palindrome or not.
//Palindrome Numbers are the numbers that read the same when reversed(e.g, 151).

void IsPalindromeNum(long long num)
{
        int Reverse=0;
        long long no=num; 
        while(no!=0)
        {
                Reverse=(Reverse*10)+(no%10);
                no/=10;
        }
        if(Reverse==num)
        {
                printf("\n%lld is a Palindrome Number.\n", num);
        }
        else
        {
                printf("\n%lld is not a Palindrome Number.\n", num);
        }
}

//IsArmstrong:
//This function checks whether a number is Armstrong Number or not.
//Armstrong Numbers are the numbers whose sum cubes of the individual digits is equal to the number itself.

void IsArmstrong(long long num)
{
        int n=0, k;
        long long no=num;
        while(no!=0)
        {
                k=no%10;
                n+=(k*k*k);
                no/=10;
        }
        if(num==n)
        {
                printf("\n%lld is an Armstrong Number.\n", num);
        }
        else
        {
                printf("\n%lld is not an Armstrong Number.\n", num);
        }
}

//IsDisarium:
//This function checks whether a number is disarium or not.
//Disarium Numbers are the numbers whose sum of the individual digits raised to their positional values.

void IsDisarium(long long num)
{
    long long no=num, i=1, rev=0, sum=0;
    while(no!=0)
    {
        rev=(rev*10)+(no%10);
        no/=10;
    }
    no=rev;
    while(no!=0)
    {
        sum+=(PowNum((no%10), i));
        no/=10;
        i++;
    }
    if(sum==num)
    {
        printf("\n%lld is a Disarium Number.\n", num);
    }
    else
    {
        printf("\n%lld is not a Disarium Number.\n", num);
    }
}

//PowNum:
//This function returns the value of num raised to index.
//This is used in IsDisarium function.

int PowNum(int num, long index)
{
    int i=1, sq=1;
    while(i<=index)
    {
        sq*=num;
        i++;
    }
    
    return sq;
}

//IsStrong:
//This function checks whether a number is Spy number or not.
//Strong Numbers are the numbers whose sum of the factorials of the individual digits is equal to the number itself.
 
void IsStrong(long long num)
{
    long long no=num, sum=0;
    while(no!=0)
    {
        sum+=factorial(no%10);
        no/=10;
    }
    if(num==sum)
    {
        printf("\n%lld is a Strong Number.\n", num);
    }
    else
    {
        printf("\n%lld is not a Strong Number.\n", num);
    }
}

//factorial:
//This function returns the factorial value of the passed number.

int factorial(int num)
{
    int i, f=1;
    for(i=num;i>0;i--)
    {
        f*=i;
    }
    
    return f;
}

//IsSpy:
//This function checks whether a number is Spy number or not.
//Spy Numbers are the numbers whose sum and multiplication of the individual digits of the number are equal to the number itself.

void IsSpy(long long num)
{
    long long sum=0, mult=1, no=num;
    while(no!=0)
    {
        sum+=(no%10);
        mult*=(no%10);
	no/=10;
    }
    if(sum==mult)
    {
		printf("\n%lld is a Spy Number.\n", num);
    }
    else
    {
		printf("\n%lld is not a Spy Number.\n", num);
    }
}

//IsPerfect:
//This function checks whether a number is a perfect number or not.
//Perfect Numbers are the numbers whose sum of it's factors is equal to the nmumber itself.

void IsPerfect(long long num)
{
    long long i, sum=0;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("\n%lld is a Perfect Number.\n", num);
    }
    else
    {
        printf("\n%lld is not a Perfect Number.\n", num);
    }
}    

//IsDuck:
//This function checks whether a number is a Duck Number or not.
//Duck Numbers are the numbers which contain zeroes.(e.g., 2050, 50).

int IsDuck(long long num)
{
    long long no=num;
    while(no!=0)
    {
        if((no%10)==0)
        {
            printf("\n%lld is a Duck Number.\n", num);
            return 0;
        }
        no/=10;    
    }
    printf("\n%lld is not a Duck Number.\n", num);
    
    return 0;
}

//IsAutomorphic:
//This function checks whether a number is Automorphic or not.
//Automorphic Numbers are the numbers whose square ends with the number itself.

void IsAutomorphic(long long num)
{
    long long sq=num*num, rnum=0, n=num;
    int i=1, no=0;
    while(i<=2)
    {
        no=(no*10)+(sq%10);
        sq/=10;
        i++;
    }
    while(n!=0)
    {
	rnum=(rnum*10)+(n%10);
	n/=10;
    }
    if(no==rnum)
    {
        printf("\n%lld is an Automorphic Number.\n", num);
    }
    else
    {
        printf("\n%lld is not an Automorphic Number.\n", num);
    }
}

//IsNiven:
//This function checks whether a number is Niven or not.
//Niven Numbers are the numbers which are when divisible by the number which is obtained by the sum of individual digits.

void IsNiven(long long num)
{
    long long no=num, sum=0;
    while(no!=0)
    {
        sum+=(no%10);
        no/=10;
    }
    if(num/sum==0)
    {
        printf("\n%lld is a Niven Number.\n", num);
    }
    else 
    {
        printf("\n%lld is not a Niven Number.\n", num);
    }
}

//IsEmirp:
//This function checks whether a number is an emirp number or not.
//Emirp Numbers are the numbers which remain prime even when reversed but not palindromic primes.

int IsEmirp(long long num)
{
	int i;
	long long no=num, reverse=0;
	for(i=2;i<no/2;i++)
	{
		if(no%i==0)
		{
			printf("\n%lld is not an Emirp Number.\n", num);
			return 0;
		}
	}
	while(no!=0)
	{
		reverse=(reverse*10)+(no%10);
		no/=10;
	}
	no=reverse;
	if(no==num)
	{
		printf("\n%lld is not an Emirp Number.\n", num);
		return 0;
	}
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			printf("\n%lld is not an Emirp Number.\n", num);
			return 0;
		}
	}
	printf("\n%lld is an Emirp Number.\n", num);

	return 0;

}

//IsTwistedPrime:
//This function checks whether a number is a twisted prime or not.
//Twisted Primes Numbers are the numbers which remain prime even when reversed and palindromic primes are also twisted primes.

int IsTwistedPrime(long long num)
{
	
	int i;
	long long no=num, reverse=0;
	for(i=2;i<no/2;i++)
	{
		if(no%i==0)
		{
			printf("\n%lld is not a Twisted Prime Number.\n", num);
			return 0;
		}
	}
	while(no!=0)
	{
		reverse=(reverse*10)+(no%10);
		no/=10;
	}
	no=reverse;
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			printf("\n%lld is not a Twisted Prime Number.\n", num);
			return 0;
		}
	}
	printf("\n%lld is a Twisted Prime Number.\n", num);

	return 0;
}

//IsHappy:
//This function checks whether a number is happy or not.
//Repeatedly replace a number with the sum of squares of its digits. If it eventually reaches 1 then the number is happy.

int IsHappy(long long num)
{
	long sq=0, no=num;
	while(no!=0)
	{
		sq+=(no%10)*(no%10);
		no/=10;
		if(no==0)
		{
			if(sq==1)
			{
				printf("\n%lld is a Happy Number.\n", num);
				return 1;
			}
			if(sq==num)
			{
				printf("\n%lld is not a Happy Number.\n", num);
				return 0;
			}
			no=sq;
			sq=0;
		}
	}
}

//IsSad:
//This function checks whether a number is sad or not.
//Repeatedly replace a number with the sum of squares of its digits. If it eventually reaches the number itself it is Sad or Unhappy.

void IsSad(long long num)
{
	long sq=0, no=num;
	while(no!=0)
	{
		sq+=(no%10)*(no%10);
		no/=10;
		if(no==10)
		{
			if(sq==1)
			{
				printf("\n%lld is not a Sad Number.\n", num);
				return;
			}
			if(sq==num)
			{
				printf("\n%lld is a Sad Number.\n", num);
				return;
			}
			no=sq;
			sq=0;
		}
	}
}

//IsAbundant:
//This function checks whether a given number is Abundant Number or not.
//Abundant Numbers are the numbers whose sum of the divisors is greater than the number itself.

void IsAbundant(long long num)
{
	long long i, sum=0;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	printf("%lld", sum);
	if(sum>num)
	{
		printf("\n%lld is an Abundant Number.\n", num);
	}
	else
	{
		printf("\n%lld is not an Abundant Number.\n", num);
	}
}

//IsDeficient:
//This function checks whether a number is Deficient Number or not.
//Deficient Numbers are the numbers whose sum of the divisors is smaller than the number itself.

void IsDeficient(long long num)
{
	long long i, sum=0;
	for(i=1;i<=(num/2);i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum<num)
	{
		printf("\n%lld is a Deficient Number.\n", num);
	}
	else
	{
		printf("\n%lld is not a Deficient Number.\n", num);
	}
}

//IsHappyPrime:
//This function checks whether a number is HappyPrime Number or not.
//Happy Prime numbers are the numbers which are both Prime and Happy.

void IsHappyPrime(long long num)
{
	if((IsHappy(num) && IsPrime(num)))
	{
		printf("\nSo, %lld is a Happy Prime Number.\n", num);
	}
	else
	{
		printf("\nSo, %lld is not a Happy Prime Number.\n", num);
	}
}

//IsSophieGermainPrimes:
//This function checks whether a number is Sophie Germain Prime or not.
//A prime p, 2p+1 also a prime are the Sophie Germain Primes.

void IsSophieGermainPrime(long long num)
{
	if(IsPrime(num) && IsPrime(2*num+1))
	{
		printf("\nSo, %lld is a Sophie Germain Prime.\n", num);
	}
	else
	{
		printf("\nSo, %lld is not a Sophie Germain Prime.\n", num);
	}
}
