#include "main.h"

/**
 * is_printable - checks if char is printable
 * @c: Char evaluation.
 *
 * Return: 1 if printable,0 if not
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends ascci in hexadecimal to buffer
 * @buffer: chars array.
 * @i: Index start appending.
 * @ascii_code: ASSCI.
 * Return: returns 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks if a char is a digit
 * @c: Char evaluation
 *
 * Return: 1 if digit, 0 if not
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Converts no. to specified size
 * @num: No. to be casted
 * @size: No.'s type to be casted.
 *
 * Return: return Casted value of num
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_number - Converts no. to specified size
 * @num: No. to be casted
 * @size: No.'s type to be casted.
 *
 * Return: return Casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
