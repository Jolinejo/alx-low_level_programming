#include "main.h"
/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * @argc: num of inputs
 * @argv: inputs
 * Return: int
 */
int main(int argc, char *argv[])
{
	int read_status, open_file, open_file2;
	int close_status, close_status2, write_status, buff;
	char *file_content;

	buff = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_content = malloc(buff);
	open_file = open(argv[1], O_RDONLY);
	read_status = read(open_file, file_content, buff);
	if (read_status == -1 || open_file == -1)
	{
		free(file_content);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	write_status = write(open_file2, file_content, read_status);
	if (write_status == -1 || open_file2 == -1)
	{
		free(file_content);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_status = close(open_file);
	close_status2 = close(open_file2);
	free(file_content);
	if (close_status2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_file2);
	else if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_file);
	if (close_status2 == -1 || close_status == -1)
		exit(100);
	return (0);
}
