#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * read_textfile - Reads text file
 * @filename: file to read
 * @letters: size of file to read
 *
 * Return: the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[4096];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buff, letters);

	close(fd);

	printf("%s", buff);

	return (strlen(buff));
}



