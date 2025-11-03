
# String Utils Library Documentation

A minimal, memory-safe C string library that handles dynamic allocation internally. The user interacts only with char* strings and does not need to manage memory manually for temporary operations.

## Functions
### 1. int stringLength(const char *text)
- [ ]
Description: Returns the length of a null-terminated string.

Parameters:
text — pointer to the string. Must not be NULL.

Returns:
Number of characters in the string, excluding the null terminator.

### 2. char *stringCopy(const char *text)

Description: Creates a new dynamically allocated copy of the given string.

Parameters:
text — pointer to the original string. Must not be NULL.

Returns:
Pointer to the new string. Returns NULL if allocation fails.

Notes:
User must call stringFree() on the returned string when finished.

### 3. void stringFree(char *text)

Description: Frees a dynamically allocated string.

Parameters:
text — pointer to a string previously returned by a library function (stringCopy, stringConcat, reverseString, etc.).

Returns:
Nothing.

Notes:
Safe to call with NULL.

### 4. char *stringConcat(const char *a, const char *b)

Description: Concatenates two strings into a new dynamically allocated string.

Parameters:
a — first string
b — second string
Both must not be NULL.

Returns:
Pointer to the concatenated string. Returns NULL if allocation fails.

Notes:
User must call stringFree() on the result.

### 5. int startsWith(const char *text, const char *pattern)

Description: Checks if text starts with pattern.

Parameters:
text — string to check
pattern — substring to compare

Returns:
1 if text starts with pattern, 0 otherwise.

### 6. int endsWith(const char *text, const char *pattern)

Description: Checks if text ends with pattern.

Parameters:
text — string to check
pattern — substring to compare

Returns:
1 if text ends with pattern, 0 otherwise.

### 7. int containsSubstring(const char *text, const char *pattern)

Description: Checks if pattern exists anywhere in text.

Parameters:
text — string to search
pattern — substring to find

Returns:
1 if pattern is found, 0 otherwise.

### 8. void reverseString(char **text)

Description: Reverses the string in-place using dynamic memory.

Parameters:
text — pointer to the string pointer.
The function will free the old string and replace it with a new reversed copy.

Returns:
Nothing.

Notes:
The user should not keep references to the original string after calling this function. Safe to pass NULL or pointer to NULL.

(Documentation created using ChatGPT)
