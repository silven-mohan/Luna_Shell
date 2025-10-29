/* LunaBack */

//Preprocessing Directives:
#include "../includes/main.h"	//This contains all the prototypes of the NumTypes Functions.

//Function Pointers:
typedef int (*NTFunc) (long long);	//Uniform Signature of some of the functions with single arguments and return type as int.
typedef int (*Func2) (long long, long long);

//Commands List:
//For Single Arg Funcs:
typedef struct
{
	const char *name;
	NTFunc func;
} CommandEntry;

CommandEntry Commands[]=
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
	{"factors", factors},
	{"factorial", fact}
};

//For Two Arguements:
typedef struct
{
	const char *name;
	Func2 func;
} DblCommandEntry1;

DblCommandEntry1 DblCommands1[]=
{
	{"multiplicationtablegen", MultiplicationTableGen},
	{"exponen", PowNumMain}
};

//For Limits Functions:
typedef void (*SingleFunc) (void);

typedef struct
{
	const char* name;
	SingleFunc func;
} SingleCommandEntry;

SingleCommandEntry SingleCommands[] =
{
	{"charlimits", CharLimits},
	{"shortlimits", ShrtLimits},
	{"intlimits", IntLimits},
	{"longintlimits", LIntLimits},
	{"longlongintlimits", LLIntLimits},
	{"floatlimits", FltLimits},
	{"doublelimits", DblLimits},
	{"longdoublelimits", LDblLimits}
};

//Global Declarations:
const int NUMCMDS=(sizeof(Commands)/sizeof(Commands[0])), NC1=(sizeof(DblCommands1)/sizeof(DblCommands1[0]));
const int SC=(sizeof(SingleCommands)/sizeof(SingleCommands[0]));
long long k;
int flag=0;

//LunaBack():
//This is the main backend function.
//This takes the command enteres from LunaFront(in frontend).

void LunaBack(char *cmd)
{
	long long arg, j=0, f, Single=0;
	char cmd2[21];
	f=0;
	//Checking For Commands with no options.
	for(k=0;cmd[k]!='\0';k++)
	{
		if(isspace(cmd[k]))
		{
			Single=1;
			break;
		}
	}
	if(Single==0)
	{
		SingleCmds(cmd);
		return;
	}
	//Tokenizing:
	char *cmdtemp=cmd;
	char *token=strtok(cmdtemp, " ");
	for(k=(strcspn(cmd, " ")+1);cmd[k]!='\0';k++)
	{
		cmd2[j]=cmd[k];
		if(isspace(cmd2[j]))
		{
			f=1;	//To Handle Multiple arguements.
		}
		j++;
	}
	cmd2[j]='\0';
	if(f==1)
	{
		MulSA(token, cmd2);
		return;
	}
	arg=asctoint(cmd2);
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

//MulSA():
//This function does the Semantic analysis for the functions with multiple arguements.
void MulSA(char *cmdname, char *args)
{
	long long arg1, arg2, j;
	k=0;
	int ki;
	char sarg1[20], sarg2[20];
	if((strcmp(cmdname, "ascsort")==0) || (strcmp(cmdname, "descsort")==0))
	{
		long ndigs=0;
		for(k=0;args[k]!='\0';k++)
		{
			if(isspace(args[k]))
			{
				ndigs++;		//Find Number of digits.
			}
		}
		ndigs++;
		long long nums[ndigs];
		char nums1[20];
		long long limit=0;
		while(limit<(ndigs))
		{
			for(k=0;k<(strcspn(args, " "));k++)
			{
				nums1[k]=args[k];	//Extract the first number.
			}
			nums1[k]='\0';
			nums[limit]=asctoint(nums1);	//Convert it into integer.
			nums1[0]='\0';
			ki=strcspn(args, " ")+1;
			for(k=(ki);args[k]!='\0';k++)
			{	
				args[k-(ki)]=args[k];		//Remove the found number.
			}
			args[k-ki]='\0';
			limit++;
		}
		nums[limit]=asctoint(args);		//Extract the last number.
		if(strcmp(cmdname, "ascsort")==0)
		{
			AscSort(nums, ndigs);
		}
		else if(strcmp(cmdname, "descsort")==0)
		{
			DescSort(nums, ndigs);
		}
		else
		{
			printf("\n -Luna: \"%s\" command not found.", cmdname);
		}

		return;
	}
	//Parsing the args:
	for(k=0;k<(strcspn(args, " "));k++)
	{
		sarg1[k]=args[k];
	}
	sarg1[k]='\0';
	j=0;
	k=(strcspn(args, " "))+1;
	while(args[k]!='\0')
	{
		sarg2[j++]=args[k];
		k++;
	}
	sarg2[j]='\0';
	arg1=asctoint(sarg1);
       	arg2=asctoint(sarg2);
	//Looking up for the function.
	for(k=0;k<NC1;k++)
	{
		if(strcmp(cmdname, DblCommands1[k].name)==0)
		{
			DblCommands1[k].func(arg1, arg2);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n -Luna: \"%s\" command not found.\n", cmdname);
	}
}

//LSCmds():
//This function is used to call the functions that require no args.

void SingleCmds(char *cmdname)
{
	flag=0;
	for(k=0;k<SC;k++)
	{
		if(strcmp(cmdname, SingleCommands[k].name)==0)
		{
			SingleCommands[k].func();
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n -Luna: \"%s\" command not found.\n", cmdname);
	}

}
