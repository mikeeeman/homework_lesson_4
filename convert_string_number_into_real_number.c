/*
 * convert_string_number_into_real_number.c
 *
 *  Created on: 17.04.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRSIZE 20

int main(void)
{
	setbuf(stdout, NULL);
	char input[STRSIZE];
	char *fNbr;
	float fN;
	float lN;
	char *lNbr;
	char *tmp;
	char *sign;

	fprintf(stdout, "Type an equation (addition and subtraction only!):\n");
	fgets(input, STRSIZE, stdin);
	fflush(stdin);
	strtok(input, "\r");

	if((tmp = strchr(input, '+')) == NULL)
	{
		if((tmp = strchr(input, '-')) == NULL)
		{
			fprintf(stderr, "Equation not in right format!\n");
			exit(0);
		}
	}
	sign = (char*)malloc(strlen(tmp));
	strcpy(sign, tmp);
	sign[1] = '\0';

	tmp++;
	lNbr = (char*)malloc(strlen(tmp));
	strcpy(lNbr, tmp);

	strtok(input, sign);
	fNbr = (char*)malloc(strlen(input));
	strcpy(fNbr, input);

	fN = atof(fNbr);
	lN = atof(lNbr);

	if(sign[0] == 43)
	{
		fprintf(stdout, "%.3f %s %.3f = %.3f", fN, sign, lN, fN+lN);
	}
	else
	{
		fprintf(stdout, "%.3f %s %.3f = %.3f", fN, sign, lN, fN-lN);
	}

	return EXIT_SUCCESS;
}


