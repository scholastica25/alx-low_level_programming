#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string parames
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char datal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklnmopqrstuvwxyz";
	char datal[] = NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] !- '\0'; i++)
	{
		for (j = 0; j < s2; j++)
		{
			if (s[i] == datal[j])
			{
				s[i] =datarot[j];
				break;
			}
		}
	}
	return (s);
}
