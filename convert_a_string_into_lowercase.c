/*
 * convert_a_string_into_lowercase.c
 *
 *  Created on: 17.04.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 200
#define NBR 2

int main(void)
{
	setbuf(stdout, NULL);

	char input[SIZE];
	char *string[NBR];
	char *tmp;
	int cnt = 0;
	int cnt2 = 0;

	for(cnt = 0 ; cnt < NBR ; cnt++)
	{
		fprintf(stdout, "Enter %d. string with max length of %d:\n", cnt+1, SIZE);
		fgets(input, SIZE, stdin);
		fflush(stdin);
		strtok(input, "\r");
		string[cnt] = (char*)malloc(strlen(input));
		strcpy(string[cnt], input);
	}

	for(cnt = 0 ; cnt < NBR ; cnt++)
	{
		fprintf(stdout, "%d. string is:\n%s\n", cnt+1, string[cnt]);
	}

	for(cnt2 = 0 ; cnt2 < NBR ; cnt2++)
	{
		for(cnt = 0; cnt < strlen(string[cnt2]) ; cnt++)
		{
			if(string[cnt2][cnt] >= 'A' && string[cnt2][cnt] <= 'Z')
			{
				string[cnt2][cnt] = string[cnt2][cnt] + ('a'-'A');
			}
		}
	}

	for(cnt = 0 ; cnt < NBR ; cnt++)
	{
		fprintf(stdout, "%d. string after converting to lower case is:\n%s\n", cnt+1, string[cnt]);
	}

	fprintf(stdout, "The string sorted alphabetically:\n");
	if((strcmp(string[0], string[1])) < 0)
	{
		fprintf(stdout, "%s\n%s", string[0], string[1]);
	}
	else
	{
		fprintf(stdout, "%s\n%s", string[1], string[0]);
	}

	return EXIT_SUCCESS;
}

