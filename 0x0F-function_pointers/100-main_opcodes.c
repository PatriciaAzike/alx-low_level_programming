#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: command line argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int bytes;
	char *opcodes;

	 if (argc != 2)
	 {
		 printf("Error\n");
		 exit(1);
	 }
	 bytes = atoi(argv[1]);
	 if (bytes < 0)
	 {
		 printf("Error\n");
		 exit(2);
	 }
	 opcodes = (char *) main;
	 for (i = 0; i < bytes; i++)
	 {
		 printf("%02x ", *(opcodes + i) & 0xFF);
		 if (i < bytes - 1)
			 printf(" ");
	 }
	printf("\n");
	return (0);
}

