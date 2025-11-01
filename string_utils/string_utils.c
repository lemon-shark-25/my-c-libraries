#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int length(const char *s)
{
	const char *p;
	for (p = s; *p != '\0'; p++) ;		//Scan from s to end of string	
	return p - s;						//Number of char between s and p
}

int startsWith(const char *text, const char *pattern)
{
	while(*pattern){
		if(*text != *pattern)
			return 0;
		text++;
		pattern++;
	}
	return 1;
}

char *stringCopy(const char *text)
{
	int len = length(text);
	char *copy = malloc((len + 1)*sizeof(char));
	if (copy == NULL)
	{
		fprintf(stderr, "Imposible memory allocation\n");
		return NULL;
	}
	for(int i = 0; i <= len; i ++)
		copy[i] = text[i];
	return copy;
}

void stringFree(char *text)
{

}

void reverseString(const char **text)
{
	if (text == NULL || *text == NULL) 
		return;

	int len = length(*text);
	char *reversed = malloc((len + 1) * sizeof(char));

	if (reversed == NULL)
	{
		fprintf(stderr, "Imposible memory allocation\n");
		return NULL;
	}

	for (int i = 0; i < len; i++)
		reversed[i] = (*text)[len - i - 1];
	reversed[len] = '\0';

	free(*text);
	*text = reversed;
}

int containsSubstring(const char *text, const char *pattern)
{	
	int textLen = length(text);
	int patternLen = length(pattern);
 	for (int i = 0; i <= textLen - patternLen; i++)	
		if(startsWith(&text[i], pattern))
			return 1;
	return 0;	//False
}
