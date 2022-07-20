#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of file
 * @letters: Length of characters in the file
 * Return: return the length of the characters being printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t length;
	char *content;

	if (!filename)
		return (0);
	content = malloc((sizeof(char) * letters) + 1);
	if (!content)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read(file, content, letters);
	close(file);
	for (length = 0; content && content[length]; length++)
		;
	content[length] = '\0';
	write(STDOUT_FILENO, content, length);
	return (length);
}
