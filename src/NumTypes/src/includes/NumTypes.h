
/*** NumTypes Header ***/

/*
 * This contains the preprocessing directives, declarations of the functions which are defined in the source file.
*/

//Preprocessing Directives:
//Header Guards
#ifndef NumTypes_H
#define NumTypes_H
#pragma once
#include<stdio.h>	//For Standard I/O Functions.
#include<math.h>	//For Basic Math Functions.
#endif

//Global Declarations:
extern long long int i, count, num;

//Function Prototypes:
//NumTypes:
int IsPrime(long long num);
int IsComposite(long long num);
int IsEven(long long num);
int IsOdd(long long num);
int IsPalindromeNum(long long num);
int IsArmstrong(long long num);
int IsDisarium(long long num);
int PowNum(int num, long index);
int IsStrong(long long num);
int factorial(int num);
int IsSpy(long long num);
int IsPerfect(long long num);
int IsDuck(long long num);
int IsAutomorphic(long long num);
int IsNiven(long long num);
int IsEmirp(long long num);
int IsTwistedPrime(long long num);
int IsHappy(long long num);
int IsSad(long long num);
int IsAbundant(long long num);
int IsDeficient(long long num);
int IsHappyPrime(long long num);
int IsSophieGermainPrime(long long num);
//NumTypes Series:
int Prime(long long int n);
int Composite(long long int n);
int Even(long long int n);
int Odd(long long int n);
int Natural(long long int n);
int Whole(long long int n);
int Palindrome(long long int n);
int Armstrong(long long int n);
int Disarium(long long int n);
int Strong(long long int n);
int Spy(long long int n);
int Perfect(long long int n);
int Duck(long long int n);
int Automorphic(long long int n);
int Niven(long long n);
int Emirp(long long n);
int TwistedPrimes(long long n);
int Abundant(long long n);
int Deficient(long long n);
int SophieGermainPrimes(long long n);
//Factors:
int factors(long long num);
//Multiplication Table Generator:
int MultiplicationTableGen(long long num, long long steps);
//AscDescSort:
int AscSort(long long *arr, long long size);
int DescSort(long long *arr, long long size);
