/* LunaFront */

//This program is the frontend part of the Luna Shell.

//Preprocessing Directives:
#include"../includes/main.h"

void LunaFront(void)
{
	char cmdname[100];
	do
	{
		printf("\nLuna> ");
		Custfgets(cmdname, sizeof(cmdname), stdin);
		if((strcmp(cmdname, "exit"))!=0)
		{
			LunaBack(cmdname);
		}
	}while((strcmp(cmdname, "exit"))!=0);
	printf(" logout\n\n");
	exit(1);
}

//Custfgets():
//This function is the custom version of fgets.

char *Custfgets(char *str, int n, FILE *stream)
{
	if((fgets(str, n, stdin))==NULL)
	{
		return NULL;
	}
	str[strcspn(str, "\n")]=0;

	return str;
}
