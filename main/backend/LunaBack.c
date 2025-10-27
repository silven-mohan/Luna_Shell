/* LunaBack */

//Preprocessing Directives:
#include "../includes/main.h"	//This contains all the prototypes of the NumTypes Functions.

//Function Pointer:
typedef int (*NTFunc) (long long);	//Uniform Signature of some of the functions in NumTypes.

//Commands List:
//NumTypes:
typedef struct
{
	const char *name;
	NTFunc func;
} NTCommandEntry;

NTCommandEntry Commands[]=
{
	//NumTypes:
	{"isprime", IsPrime},
	{"iscomposite", IsComposite},
	{"iseven", IsEven},
	{"isodd", IsOdd},
//	{"ispalindrome", Palindrome},
	{"isarmstrong", IsArmstrong},
	{"isdisarium", IsDisarium},
	{"isstrong", IsStrong},
	{"isspy", IsSpy},
	{"isduck", IsDuck},
	{"isautomorphic", IsAutomorphic},
	{"isniven", IsNiven},
	{"isemirp", IsEmirp},
	{"istwistedprime", IsTwistedPrime},
	{"ishappy", IsHappy},
	{"issad", IsSad},
	{"isabundant", IsAbundant},
	{"isdeficient", IsDeficient},
	{"ishappyprime", IsHappyPrime},
	{"issophiegermainprime", IsSophieGermainPrime},
	//NumTypesSeries:
	{"prime", Prime},
	{"composite", Composite},
	{"even", Even},
	{"odd", Odd},
	{"natural", Natural},
	{"whole", Whole},
	{"palindrome", Palindrome},
	{"armstrong", Armstrong},
	{"disarium", Disarium},
	{"strong", Strong},
	{"spy", Spy},
	{"perfect", Perfect},
	{"duck", Duck},
	{"automorphic", Automorphic},
	{"niven", Niven},
	{"emirp", Emirp},
	{"twistedprimes", TwistedPrimes},
	{"abundant", Abundant},
	{"deficient", Deficient},
	{"sophiegermainprimes", SophieGermainPrimes},
	//Factors:
	{"factors", factors}

};

const int NUMCMDS=(sizeof(Commands)/sizeof(Commands[0]));
long long k;

//LunaBack():
//This is the main backend function.
//This takes the command enteres from LunaFront(in frontend).

void LunaBack(char *cmd)
{
	long long arg, j=0;
	char LBNum[21];
	//Tokenizing:
	char *cmdtemp=cmd;
	char *token=strtok(cmdtemp, " ");
	for(k=(strcspn(cmd, " ")+1);cmd[k]!='\0';k++)
	{
		LBNum[j++]=cmd[k];
	}
	LBNum[j]='\0';
	arg=asctoint(LBNum);
	SemanticAnalyzer(token, arg);
}

//asctoint():
//This converts a number string to integer.
//This handles and shows error upon non-integers like "abc",...

long long asctoint(char *numstr)
{
	num=0;
	for(k=0;numstr[k]!='\0';k++)
	{
		if(!(isdigit(numstr[k])))
		{
			printf("%s is not a number. Try Again!", numstr);
			return 0;
		}
	}
	for(k=0;numstr[k]!='\0';k++)
	{
		num=(num*10)+(numstr[k]-'0');
	}

	return num;
}

//SemanticAnalyzer():
//This function looks up the command name in the commands list and finds it, retreives its function pointer and executes it by passing specified argument.
void SemanticAnalyzer(char *cmdname1, long long number)
{
	int flag=0;
	for(k=0;k<NUMCMDS;k++)
	{
		if(strcmp(cmdname1, Commands[k].name)==0)
		{
			Commands[k].func(number);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n -Luna: \"%s\" command not found.\n", cmdname1);
	}
}

