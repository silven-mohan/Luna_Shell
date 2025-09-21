/*** NumTypes Function Definitions ***/

//Preprocessing Directives:

//Header Guards

#ifndef NumTypes_H
#define NumTypes_H
#pragma once
#include<stdio.h>
#endif

//Function Prototypes:
int IsPrime(long long num);
int IsComposite(long long num);
void IsEven(long long num);
void IsOdd(long long num);
void IsPalindromeNum(long long num);
void IsArmstrong(long long num);
void IsDisarium(long long num);
int PowNum(int num, long index);
void IsStrong(long long num);
int factorial(int num);
void IsSpy(long long num);
void IsPerfect(long long num);
int IsDuck(long long num);
void IsAutomorphic(long long num);
void IsNiven(long long num);

//Main Function:
int main()
{
        IsNiven(18);
        IsNiven(19);

        return 0;
}

//Function Definitions:

//IsPrime:
//This Function checks whether a number is prime or not.

int IsPrime(long long num)
{
        int i;
        if(num==1)        //Checking if the number is 1.
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
        if(num==1)        //Checking if the number is 1.
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
        int Reverse=0;
        long long no=num; 
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
                printf("\n%lld is an Armstrong Number.", num);
        }
        else
        {
                printf("\n%lld is not an Armstrong Number.", num);
        }
}

//IsDisarium:
//This function checks whether a number is disarium or not.
void IsDisarium(long long num)
{
    int i=1, sum=0, rev=0;
    long long no=num;
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
        printf("\n%lld is a Disarium Number.", num);
    }
    else
    {
        printf("\n%lld is not a Disarium Number.", num);
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
void IsStrong(long long num)
{
    int sum=0;
    long long no=num;
    while(no!=0)
    {
        sum+=factorial(no%10);
        no/=10;
    }
    if(num==sum)
    {
        printf("\n%lld is a Strong Number.", num);
    }
    else
    {
        printf("\n%lld is not a Strong Number.", num);
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
void IsSpy(long long num)
{
    int sum=0, mult=1;
    while(num!=0)
    {
        sum+=(num%10);
        mult*=(num%10);
    }
}

//IsPerfect:
//This function checks whether a number is a perfect number or not.
void IsPerfect(long long num)
{
    int i, sum=0;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("\n%lld is a Perfect Number.", num);
    }
    else
    {
        printf("\n%lld is not a Perfect Number.", num);
    }
}    

//IsDuck:
//This function checks whether a number is a Duck Number or not.
int IsDuck(long long num)
{
    long long no=num;
    while(no!=0)
    {
        if((no%10)==0)
        {
            printf("\n%lld is a Duck Number.", num);
            return 0;
        }
        no/=10;    
    }
    printf("\n%lld is not a Duck Number.", num);
    
    return 0;
}

//IsAutomorphic:
//This function checks whether a number is Automorphic or not.
void IsAutomorphic(long long num)
{
    long long sq=num*num;
    int i=1, no=0;
    while(i<=2)
    {
        no=(no*10)+(sq%10);
        sq/=10;
        i++;
    }
    if(no==52)
    {
        printf("\n%lld is an Automorphic Number.", num);
    }
    else
    {
        printf("\n%lld is not an Automorphic Number.", num);
    }
}

//IsNiven:
//This function checks whether a number is Niven or not.
void IsNiven(long long num)
{
    long long no=num;
    int sum=0;
    while(no!=0)
    {
        sum+=(no%10);
        no/=10;
    }
    if(num/sum==0)
    {
        printf("\n%lld is a Niven Number.", num);
    }
    else 
    {
        printf("\n%lld is not a Niven Number.", num);
    }
}
