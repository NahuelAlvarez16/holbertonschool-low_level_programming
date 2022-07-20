#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: Name of file
 * @text_content: Content of new line for file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t length;

	if (!filename)
		return (-1);
	for (length = 0; text_content && text_content[length]; length++)
		;
	file = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, length);
	close(file);
	return (1);
}
