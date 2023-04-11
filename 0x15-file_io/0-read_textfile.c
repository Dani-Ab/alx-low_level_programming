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
	int fdop, fdrd, fdwr;
	char *txt_ptr;

	txt_ptr = malloc(sizeof(char *) * letters);
	fdop = open("filename", O_RDONLY);
	if (txt_ptr == NULL || filename == NULL)
		return (0);
	if (fdop == -1)
		return (0);
	fdrd = read(fdop, txt_ptr, letters);
	fdwr = write(STDOUT_FILENO, txt_ptr, fdrd);

	if (fdrd == -1 || fdwr == -1)
		return (0);
	free(txt_ptr);
	close(fdop);
	return (fdrd);
}
