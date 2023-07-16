#include "main."

int create_file(const char *filename, char *text_content)
{
    int fd; /* file descriptor */
    ssize_t len = 0; /* length of content written */

    if (!filename) /* check if filename is NULL */
        return (-1);

    /* open file with specified filename and flags */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1) /* check if open failed */
        return (-1);

    if (text_content) /* check if text_content is not NULL */
        /* write content to file */
        len = write(fd, text_content, strlen(text_content));

    close(fd); /* close file */

    /* return -1 if write failed, 1 otherwise */
    return (len == -1 ? -1 : 1);
}
