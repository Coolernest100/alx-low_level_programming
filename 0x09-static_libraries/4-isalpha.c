#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to br checked
 * Return: 1 if c is a letter, 0 othewise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
