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
	int file_cr, text_len;

	text_len = strlen(text_content);
	file_cr = open("filename", O_RDWR | O_CREAT | O_TRUNC);
	if (filename == NULL)
		return (-1);
	if (file_cr == -1)
		return (-1);
	if (text_content)
		write(file_cr, text_content, text_len);
	close(file_cr);
	return (1);
}
