#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - returns length of string
 * @s: string to count
 *
 * Return: int value
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
