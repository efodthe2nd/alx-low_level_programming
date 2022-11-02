#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text content
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);

	return (1);
}


/**
 * _strlen - Returns the length of the string
 * @s: String to count
 *
 * Return: STring length
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}

