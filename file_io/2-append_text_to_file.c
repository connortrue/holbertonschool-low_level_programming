#include "main.h"
/**
 * append_text_to_file - appends text_content to a file
 * @filename: name of the file to append to
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t len = 0; /* length of content written */

	if (!filename) /* check if filename is NULL */
		return (-1);

	/* open file with specified filename and flags */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* check if open failed */
		return (-1);

	if (text_content) /* check if text_content is not NULL */
		/* append content to file */
		len = write(fd, text_content, strlen(text_content));

	close(fd); /* close file */

	/* return -1 if write failed, 1 otherwise */
	return (len == -1 ? -1 : 1);
}
