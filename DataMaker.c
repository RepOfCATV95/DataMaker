#include <stdio.h>
#include "DataMaker.h"

int main()
{
	char TheData[MAX_TEXT_LENGTH];
	char realFile[MAX_DOS_FILE];
	FILE *FD;
	
	printf("Enter a file you want to write onto:\n");
	gets(realFile);
	FD = fopen(realFile,"w");
	if (FD==None)
	{
		printf("Failed to open a file for writing the data you entered.");
		return 1;
	}
	
	printf("Enter a text you want to write onto the file:\n");
	gets(TheData);
	
	fprintf(FD,"%s",TheData);
	fclose(FD);
	
	return 0;
}

   
   
