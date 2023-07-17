#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

void close_fd(int fd1, int fd2);
void error_msg(char *msg, char *file, int exit_code, int fd1, int fd2);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_msg("Usage: cp file_from file_to", NULL, 97, 0, 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_msg("Error: Can't read from file ", argv[1], 98, 0, 0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		error_msg("Error: Can't write to ", argv[2], 99, fd_from, 0);

	while ((rd = read(fd_from, buf, BUFSIZE)) > 0)
		if (write(fd_to, buf, rd) == -1)
			error_msg("Error: Can't write to ", argv[2], 99, fd_from, fd_to);

	if (rd == -1)
		error_msg("Error: Can't read from file ", argv[1], 98, fd_from, fd_to);

	close_fd(fd_from, fd_to);
	return (0);
}

/**
 * close_fd - closes file descriptors
 * @fd1: first file descriptor to close
 * @fd2: second file descriptor to close
 */
void close_fd(int fd1, int fd2)
{
	if (fd1 && close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (fd2 && close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
}

/**
 * error_msg - prints an error message and exits with a code
 * @msg: message to print
 * @file: name of the file to include in the message
 * @exit_code: code to exit with
 * @fd1: first file descriptor to close before exiting
 * @fd2: second file descriptor to close before exiting
 */
void error_msg(char *msg, char *file, int exit_code, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file ? file : "");
	close_fd(fd1, fd2);
	exit(exit_code);
}
