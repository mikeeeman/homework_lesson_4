/*
 * string_change.c
 *
 *  Created on: 17.04.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int main(void)
{
	setbuf(stdout, NULL);
	char input[SIZE];
	char *fName = NULL;
	char *mName = NULL;
	char *lName = NULL;
	char *allName = NULL;

	fprintf(stdout, "Enter your first Name:\n");
	fgets(input, SIZE, stdin);
	fflush(stdin);
	strtok(input, "\r");
	if((fName = (char*)malloc(strlen(input)+1)) == NULL)
	{
		fprintf(stderr, "Error allocating memory!");
		exit(-1);
	}
	strcpy(fName, input);

	fprintf(stdout, "Enter your middle Name:\n");
	fgets(input, SIZE, stdin);
	fflush(stdin);
	strtok(input, "\r");
	if((mName = (char*)malloc(strlen(input)+1)) == NULL)
	{
		fprintf(stderr, "Error allocating memory!");
		exit(-1);
	}
	strcpy(mName, input);

	fprintf(stdout, "Enter your last Name:\n");
	fgets(input, SIZE, stdin);
	fflush(stdin);
	strtok(input, "\r");
	if((lName = (char*)malloc(strlen(input)+1)) == NULL)
	{
		fprintf(stderr, "Error allocating memory!");
		exit(-1);
	}
	strcpy(lName, input);

	allName = (char*)malloc(strlen(lName)+7);
	strncpy(allName, fName, 1);
	strcat(allName, ". ");
	strncat(allName, mName, 1);
	strcat(allName, ". ");
	strcat(allName, lName);

	fprintf(stdout,"Your name is: %s", allName);

	return EXIT_SUCCESS;
}

