#include "main.h"
/**
 * main -File copy program main
 * @argc: input argument count
 * @argv: Input argument pointer
 *
 * Return: 0 for sucesses 1 for failer
 */
int main(int argc, char *argv[])
{
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int dfile_d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	dfile_d = open(argv[2], O_WRONLY);
	if (dfile_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[2]);
		exit(99);
	}
	if (fchmod(dfile_d, file_mode) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set file mode for %s\n", argv[2]);
		exit(100);
	}
	if (close(dfile_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfile_d);
		exit(100);
	}
	return 0;
}

/**
 * copy_file - write the copy file
 * @src: source file
 * @dest:destination file
 * Return: Nothing
 */

void copy_file(const char *src, const char *dest)
{
	const int buf_size = 1024;
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int sfile_d, dfile_d, read_status;
	char buffer[1024];

	sfile_d = open(src, O_RDONLY);
	if (sfile_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dfile_d = open(dest, O_CREAT | O_WRONLY | O_TRUNC, file_mode);
	if (dfile_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
		exit(99);
	}
	while ((read_status = read(sfile_d, buffer, buf_size)) > 0)
	{
		if (write(dfile_d, buffer, read_status) != read_status)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
			exit(99);
		}
	}
	if (read_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(sfile_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sfile_d);
		exit(100);
	}
}
