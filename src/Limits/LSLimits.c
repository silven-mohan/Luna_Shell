/** LSLimits **/

/*
 * This contains the definitions of commands which can be used to know the range and other data related to both Decimal, FPU data types.
 * This tool  relies on the macros that are defined in the header files <limits.h> for Decimal data types and <float.h> for FPU data types.
 * The data entirely depends and so varies with platform on which it being used.
*/

//Preprocessing Directives:
#include "includes/LSLimits.h"

//Function Definitions:
//CharLimits:
//This function gives the size and range of the char data type.
void CharLimits(void)
{
	printf("\n\nSize of char data type is: %d bits / %d bytes", CHAR_BIT, sizeof(char));		//Print the size of the char data type.
	printf("\nThe Range of the signed char is: %d to %+d", SCHAR_MIN, SCHAR_MAX);		//Print the range of the signed char data type.
	printf("\nThe Range of the unsigned char is: 0 to %d\n\n", UCHAR_MAX);		//Print the range of unsigned char data type.
}

//ShrtLimits:
//This function gives the size and range of the short int data type.
void ShrtLimits(void)
{
    printf("\n\nSize of short int data type is: %d bits / %d bytes", (sizeof(short)*CHAR_BIT), sizeof(short));        //Print the size of the short int data type.
    printf("\nThe Range of signed short int is: %d to %+d", SHRT_MIN, SHRT_MAX);        //Print the range of signed short int.
    printf("\nThe Range of unsigned short int is: 0 to %lld\n\n", USHRT_MAX);        //Print the range of unsigned short int.
}

//IntLimits:
//This function gives the size and range of the int data type.
void IntLimits(void)
{
	printf("\n\nSize of int data type is: %d bits / %d bytes", (sizeof(int))*CHAR_BIT, sizeof(int));	//Print the size of the int data type.
	printf("\nThe Range of signed int is: %lld to %+lld", INT_MIN, INT_MAX);		//Print the range of signed int.
	printf("\nThe Range of unsigned int is: 0 to %lu\n\n", UINT_MAX);			//Print the range of unsigned int.
}

//LIntLimits:
//This function gives the size and range of long int data type.
void LIntLimits(void)
{
    printf("\n\nSize of long int data type is: %d bits / %d bytes", (sizeof(long)*CHAR_BIT), sizeof(long));        //Prints the size of the long int data type.
    printf("\nThe Range of signed long int data type is: %ld to %+ld", LONG_MIN, LONG_MAX);        //Print the range of signed long int data type.
    printf("\nThe Range of unsigned long int data type is: 0 to %lu\n\n", ULONG_MAX);        //Prints the range of unsigned long int data type.
}

//LLIntLimits:
//This function gives the size and range of long long int data type.
void LLIntLimits(void)
{
	printf("\n\nSize of long long int data type is: %d bits / %d bytes", (sizeof(long long)*CHAR_BIT), sizeof(long long));		//Prints the size of long long int data type.
	printf("\nThe Range of signed long long int is: %lld to %+lld", LLONG_MIN, LLONG_MAX);		//Prints the range of signed long long int data type.
	printf("\nThe Range of unsigned long long int is: 0 to %llu\n\n", ULLONG_MAX);	
}

//FltLimits:
//This function gives the limits and other data of the float data type.
void FltLimits(void)
{
	printf("\n\nThe Maximum finite value of the float data type is: %e", FLT_MAX);
	printf("\nThe smallest difference between 1.0 and the next representable float is: %e", FLT_EPSILON);
	printf("\nThe Decimal digits precision of float data type is: %d", FLT_DIG);
	printf("\nThe Number of bits in mantissa in float data type is: %d", FLT_MANT_DIG);
	printf("\nThe Range of exponent value of the float data type is: %d to %d", FLT_MIN_EXP, FLT_MAX_EXP);
	printf("\nThe Base of the exponent representation of float data type is: %d", FLT_RADIX);
	printf("\nThe Minimum Subnormal float is: %e\n\n", FLT_TRUE_MIN);
}

//DblLimits:
//This function gives the limits and other data of the double data type.
void DblLimits(void)
{
	printf("\n\nThe Range of the double data type is: %e to %e", DBL_MIN, DBL_MAX);
	printf("\nThe Smallest difference between 1.0 and next representable double is: %e", DBL_EPSILON);
	printf("\nThe Decimal digits of precision of double data type is: %e", DBL_DIG);
	printf("\nThe Number of bits in mantissa in double is: %d", DBL_MANT_DIG);
	printf("\nThe Range of the exponent value of the double data type is: %e to %e", DBL_MIN_EXP, DBL_MAX_EXP);
	printf("\nThe Minimum Subnormal double is: %e\n\n", DBL_TRUE_MIN);
}

//LDblLimits:
//This function gives the limits and othe data of the long double data type.
void LDblLimits(void)
{
	printf("\n\nThe Range of the long double data type is: %e to %e", LDBL_MIN, LDBL_MAX);
	printf("\nThe Smallest difference between 1.0 and next representable long double is: %e", LDBL_EPSILON);
	printf("\nThe Decimal digits of precision is: %d", LDBL_DIG);
	printf("\nThe Number of bits in mantissa in long double is: %d", LDBL_MANT_DIG);
	printf("\nThe Range of the exponent value of the long double data type is: %e to %e", LDBL_MIN_EXP, LDBL_MAX_EXP);
	printf("\nThe Minimum Subnormal value of the long double data type is: %e\n", LDBL_TRUE_MIN);
}
