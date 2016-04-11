/*
 * concatenate_strings.c
 *
 *  Created on: 11.04.2016
 *      Author: mcmey
 */
#include <stdio.h>
#include <string.h>
int main( void )
{
	setbuf(stdout, NULL);
	int n, cnt;
	char *str1 = NULL;
	char str2[2];

	// Put a null character at the end of str2[].

	str2[1] = '\0';
	for (n = 97, cnt = 2 ; n < 123 ; n++, cnt++)
	{
		str2[0] = n;
		str1 = (char *) realloc(str1, cnt);

		str1[cnt-1] = '\0';
		strcat(str1, str2);
		puts(str1);
	}
	return(0);
}

