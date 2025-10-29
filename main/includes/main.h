/** main.h **/
//This header file contains all of the preprocessing directives and function prototypes.

//Header Gaurd:
#pragma once	//Prevents multiple inculsion of the same header files.

//Preprocessing Directives:
#pragma once
#include<stdio.h>	//For Basic I/O functions like printf(), scanf(), ..etc.
#include<math.h>	//For Basic Math Functions.
#include<string.h>	//For Basic String functions.
#include "../../src/NumTypes/src/includes/NumTypes.h"	//This contains all of the prototypes for the defined Number Type functions.
#include<stdlib.h>	//For Basic Standard Library Functions.
#include<ctype.h>	//For Basic Character Classifying Functions.
#include "../../src/Limits/includes/LSLimits.h"		//This contains all of the includes and prototypes for the defined Limits Functions.

//Function Prototypes:(Only For the Functions in frontend and backend)
void LunaFront(void);
void LunaBack(char *cmd);

//Miscellaneous:
char *Custfgets(char *str, int n, FILE *stream);
long long asctoint(char *numstr);
void SemanticAnalyzer(char *cmdname1, long long number);
void MulSA(char *cmdname, char *args);
void SingleCmds(char *cmdname);
