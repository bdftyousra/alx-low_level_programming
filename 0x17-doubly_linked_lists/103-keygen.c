#include <stdlib.h>
#include <stdio.h>

int f2(char *str, int len);
int f3(char *str, int len);
int f4(char *str, int len);
int f5(char *str, int len);
int f6(char *str, int len);

/**
 * main - Generates a key for the crackme5 program
 * @argc: The number of arguments that were passed
 * @argv: The arguments that were passed
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	char *username = NULL;
	char key[7] = {0};
	int uname_len = 0;
	char *tb = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (argc == 2)
	{
		username = argv[1];
		while (username[uname_len] != '\0')
			uname_len++;
		key[0] = tb[(uname_len ^ 59) & 63];
		key[1] = tb[f2(username, uname_len)];
		key[2] = tb[f3(username, uname_len)];
		key[3] = tb[f4(username, uname_len)];
		key[4] = tb[f5(username, uname_len)];
		key[5] = tb[f6(username, uname_len)];
		printf("%s\n", key);
	}
	else
	{
		printf("Usage: %s username\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

/**
 * f2 - Computes the second character in the key for the given username
 * @str: The username
 * @len: The length of the given username
 *
 * Return: The computed character
 */
int f2(char *str, int len)
{
	int i, j, c;

	i = 0;
	j = 0;
	while (j < len)
	{
		c = str[j];
		i = i + c;
		++j;
	}
	return ((i ^ 79) & 63);
}

/**
 * f3 - Computes the third character in the key for the given username
 * @str: The username
 * @len: The length of the given username
 *
 * Return: The computed character
 */
int f3(char *str, int len)
{
	int i, j, c;

	i = 1;
	j = 0;
	while (j < len)
	{
		c = str[j];
		i = c * i;
		++j;
	}
	return ((i ^ 85) & 63);
}

/**
 * f4 - Computes the fourth character in the key for the given username
 * @str: The username
 * @len: The length of the given username
 *
 * Return: The computed character
 */
int f4(char *str, int len)
{
	int i, j, a, b, rdi10, n;

	i = str[0];
	j = 0;
	while (j < len)
	{
		a = str[j];
		if (a > i)
		{
			b = str[j];
			i = b;
		}
		++j;
	}
	rdi10 = i ^ 14;
	*(&rdi10 + 4) = 0;
	srand(rdi10);
	n = rand();
	return (n & 63);
}

/**
 * f5 - Computes the fifth character in the key for the given username
 * @str: The username
 * @len: The length of the given username
 *
 * Return: The computed character
 */
int f5(char *str, int len)
{
	int i, j, a, b, c;

	i = 0;
	j = 0;
	while (j < len)
	{
		a = str[j];
		b = str[j];
		i = i + b * a;
		++j;
	}
	c = i;
	c = c ^ 0xef;
	return (c & 63);
}

/**
 * f6 - Computes the sixth character in the key for the given username
 * @str: The username
 * @len: The length of the given username
 *
 * Return: The computed character
 */
int f6(char *str, int len)
{
	int i, j, n;

	(void)len;
	i = 0;
	j = 0;
	while (str[0] > j)
	{
		n = rand();
		i = n;
		++j;
	}
	i ^= 0xe5;
	return (i & 63);
}
