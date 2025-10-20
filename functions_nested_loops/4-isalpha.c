#include "main.h"

/**
 * _isalpha - checks letters
 * @c: char code
 * Return: 1 if a-z or A-Z, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
