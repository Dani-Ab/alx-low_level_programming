#include "main.h"

/**
 * append_text_to_file - append given string to a fiel
 * @filename : filename of file
 * @text_content: Null terminating string to be writen on new file
 *
 * Return: 1 for success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdcr, fdwr;

	if (filename == NULL)
		return (-1);
	fdcr = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fdcr == -1)
		return (-1);
	if (text_content)
	{
		fdwr = write(fdcr, text_content, strlen(text_content));
		if (fdwr == -1)
			return (-1);
	}
	close(fdcr);
	return (1);
}

