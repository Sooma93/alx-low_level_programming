#include "main.h"
/**
 * _isalpha - check for the order of alpahbet
 * @c: check the alphabet
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
