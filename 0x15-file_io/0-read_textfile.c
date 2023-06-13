#include "main.h"
/**
 * read_textfile - Entry point
 * Description: to check if letter is uppercase
 * @filename: name
 * @letters: let
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, write_status, read_status;
	char *file_content;

	if (filename == NULL || letters == 0)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);
	file_content = malloc(letters);
	if (file_content == NULL)
		return (0);
	read_status = read(open_file, file_content, letters);
	if (read_status == -1)
	{
		free(file_content);
		close(open_file);
		return (0);
	}
	write_status = write(STDOUT_FILENO, file_content, read_status);
	if (write_status == -1 || write_status != read_status)
	{
		free(file_content);
		close(open_file);
		return (0);
	}
	free(file_content);
	close(open_file);
	return (write_status);
}
