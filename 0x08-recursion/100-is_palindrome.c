#include "main.h"

/**
 * palindrome_check - checks the string
 * @str: the string
 * @len: length of the string
 * @i: iterator
 * Return: length of the string
 */

int palindrome_check(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindrome_check(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string
 * Return: 1 if palindrome, 2 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindrome_check(s, length, i));
}
