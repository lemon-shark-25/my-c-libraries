#ifndef STRING_UTILS_H
#define STRING_UTILS_H

//Memory-safe string library

int stringLength(const char *text);                      // Returns length
char *stringCopy(const char *text);                     // Returns new copy
void stringFree(char *text);                            // Frees string
char *stringConcat(const char *a, const char *b);       // Concatenate two strings
int startsWith(const char *text, const char *pattern);  // Checks start
int endsWith(const char *text, const char *pattern);    // Checks end
int containsSubstring(const char *text, const char *pattern); // Substring search
void reverseString(char **text);                        // Reverses string in place

#endif
