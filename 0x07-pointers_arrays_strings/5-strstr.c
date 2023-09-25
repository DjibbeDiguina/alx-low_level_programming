#include "main.h"

/**
 * _strstr - Locate a substring
 * @haystack: the string to search
 * @needle: the substring to be located
 * Return: If the substring is located - a pointer to the beginning of the located substring.
 * If the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *hay_ptr, *needle_ptr;

if (*needle == '\0')
return (haystack);
while (*haystack)
{
hay_ptr = haystack;
needle_ptr = needle;
while (*needle_ptr && *hay_ptr == *needle_ptr)
{
hay_ptr++;
needle_ptr++;
}
if (*needle_ptr == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
