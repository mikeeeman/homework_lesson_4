/*
 * strstr_function.c
 *
 *  Created on: 17.04.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	setbuf(stdout, NULL);
	char *loc, buf1[80], buf2[80];
	printf("Enter the string to be searched: ");
	gets(buf1);
	fflush(stdin);
	strtok(buf1, "\r");
	printf("Enter the target string: ");
	gets(buf2);
	fflush(stdout);
	strtok(buf2, "\r");
	loc = strstr(buf1, buf2);
	if(loc == NULL)
	{
		printf("No match was found.\n");
	}
	else
	{
		printf("%s was found at position %ld.\n", buf2, loc-buf1);
	}

	return EXIT_SUCCESS;
}

