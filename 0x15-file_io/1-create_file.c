#include "main.h"
/**
 * create_file - creat file wiht given string to be writen
 * @filename : filename of new file
 * @text_content: Null terminating string to be writen on new file
 *
 * Return: 1 for success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdcr, fdwr;

	if (filename == NULL)
		return (-1);
	fdcr  = open("filename", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content)
	{
		fdwr = write(fdcr, text_content, strlen(text_content));
	}
	if (fdcr == -1 || fdwr == -1)
		return (-1);
	close(fdcr);
	return (1);
}
