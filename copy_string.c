/*
 * copy_string.c
 *
 *  Created on: 17.04.2016
 *      Author: Michael
*/
#include <stdio.h>
#include <string.h>
#define SIZE 200

int main(void)
{
	setbuf(stdout, NULL);
	char *source = "Mein input String";
	char *dest1;
	char *dest2;
	char input[SIZE];

	fprintf(stdout, "The source string is: %s", source);
	puts("");
	dest1 = (char*)malloc(strlen(source));
	strcpy(dest1, source);
	fprintf(stdout, "The destination string is: %s", dest1);
	puts("");

	fprintf(stdout, "Enter a string with max length of %d: ", SIZE);
	fgets(input, SIZE, stdin);
	fflush(stdin);
	strtok(input, "n");
	fprintf(stdout, "The input string is: %s\n", input);
	dest2 = (char*)malloc(strlen(input));
	strcpy(dest2, input);
	fprintf(stdout, "The destination input string is: %s", dest2);







	return 0;
}

