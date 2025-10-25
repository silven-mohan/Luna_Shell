
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
int IsEmirp(long long num);
int IsTwistedPrime(long long num);
int IsHappy(long long num);
void IsSad(long long num);
void IsAbundant(long long num);
void IsDeficient(long long num);
void IsHappyPrime(long long num);
void IsSophieGermainPrime(long long num);
//NumTypes Series:
void Prime(long long int n);
void Composite(long long int n);
void Even(long long int n);
void Odd(long long int n);
void Natural(long long int n);
void Whole(long long int n);
void Palindrome(long long int n);
void Armstrong(long long int n);
void Disarium(long long int n);
void Strong(long long int n);
void Spy(long long int n);
void Perfect(long long int n);
void Duck(long long int n);
void Automorphic(long long int n);
