#include "main.h"
/**
 * is_palindrome - checks if a string is a plaindrome
 * @s: pointer to string
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palindrome_rec(s, 0, len - 1));
}

/**
 * is_palindrome_rec - checks if two characters of a string are the same
 * @s: string to be checked
 * @i: first index
 * @j: last index
 * Return: 1 if equal, else 0
 */
int is_palindrome_rec(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palindrome_rec(s, i + 1, j - 1));
}
