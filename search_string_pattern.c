/*
 * search_string_pattern.c
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
	char *source = "My input String";
	char *dest1;

	fprintf(stdout, "The source string is: %s", source);
	puts("");
	dest1 = (char*)malloc(sizeof(strlen(source)));
	strcpy(dest1, source);
	dest1 = strrchr(dest1, 'i');
	fprintf(stdout, "The destination string is: %s", dest1);
	puts("");

	return 0;
}



