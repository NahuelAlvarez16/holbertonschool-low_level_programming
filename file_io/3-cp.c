#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Length of string
 * @src: String
 * Return: return length of a string
 */
int _strlen(char *src)
{
	int length;

	for (length = 0; src && src[length]; length++)
		;
	return (length);
}
/**
 * get_file_content - reads a text file and return its content
 * @filename: Name of file
 * Return: return the content of a file
 */
char *get_file_content(char *filename)
{
	int file, code_receiver;
	char *content;

	content = malloc((sizeof(char) * 1024) + 1);
	if (!content)
		return (NULL);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	code_receiver = read(file, content, 1024);
	if (code_receiver == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	code_receiver = close(file);
	if (code_receiver == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file);
		exit(98);
	}
	content[_strlen(content)] = '\0';
	return (content);
}
/**
 * main - Program that copies the content of a file to another file.
 * @ac: Length of arguments
 * @av: Arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file, code_receiver;
	char *content;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	content = get_file_content(av[1]);
	file = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0660);
	if (file == -1)
		exit(98);
	write(file, content, _strlen(content));
	code_receiver = close(file);
	if (code_receiver == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file);
		exit(98);
	}
	return (0);
}
