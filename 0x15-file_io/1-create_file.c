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
	int fpcr, fpwr;

	if (filename == NULL)
		return (-1);
	fpcr  = open("filename", O_RDWR |  O_CREAT | O_TRUNC, 0600);
	if (text_content)
	{
		fpwr = write(fpcr, text_content, strlen(text_content));
	}
	if (fpcr == -1 || fpwr == -1)
		return (-1);
	close(fpcr);
	return (1);
}
