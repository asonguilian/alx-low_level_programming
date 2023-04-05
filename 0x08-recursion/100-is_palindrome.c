/**
  * _strlen_recursion - returns the length of a string
  * @s: input string
  * Return: th elength of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 +_strlen_recursion( s + 1));
}
/**
  *
/**
  * is_palindrome - verifies if a string is a palindrome or not
  * @s: input string
  * Return: 1 if string is palindrome, otherwise 0
  */

int is_palindrome(char *s)
{
	
