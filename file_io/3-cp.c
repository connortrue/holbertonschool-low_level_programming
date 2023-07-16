#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[1024];
	ssize_t nread;

	/* check the number of arguments */
	if (argc != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* open file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* open file_to for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	/* copy the content of file_from to file_to */
	while ((nread = read(fd_from, buf, sizeof(buf))) > 0)
	{
		write(fd_to, buf, nread);
	}

	/* close file_from */
	close(fd_from);

	/* close file_to */
	close(fd_to);

	return (0);
}
