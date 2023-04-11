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
	int file_cr, file_wr, text_len;

	if (filename == NULL)
		return (-1);
	text_len = strlen(text_content);
	file_cr = open("filename", O_WRONLY | O_APPEND);
	if (file_cr == -1)
		return (-1);
	if (text_content)
	{
		file_wr = write(file_cr, text_content, text_len);
		if (file_wr == -1)
			return (-1);
	}
	close(file_cr);
	return (1);
}

