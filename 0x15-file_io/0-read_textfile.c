#include "main.h"
/**
 * read_textfile -Reads a text file and prints it to the staout
 * @filename: file name to be read
 * @letters: size of chars to be read byte
 *
 * Return: number of letters to could be read/write or 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_op, file_rd;
	char *num_leng;

	num_leng = malloc(sizeof(char) * letters);
	file_op = open("filename", O_RDONLY);
	if (num_leng == NULL || filename == NULL)
		return (0);
	if (file_op == -1)
		return (0);
	file_rd = read(file_op, num_leng, letters);
	write(STDOUT_FILENO, num_leng, file_rd);

	free(num_leng);
	close(file_op);
	return (file_rd);
}
