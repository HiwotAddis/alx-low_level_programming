#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - check characters
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 or 0
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
