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
	int file_cr, file_wr, text_len, i = 0;

	while (text_content[i])
	{
		i++;
	}
	text_len = i - 1;
	file_cr = open("filename", O_RDWR | O_CREAT | O_TRUNC);
	if (filename == NULL || file_cr == -1)
		return (-1);
	if (text_content)
		file_wr = write(file_cr, text_content, text_len);
	if (file_wr == -1)
		return (-1);
	close(file_cr);
	return (1);
}
