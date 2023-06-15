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
	int read_s, open_f, open_f2, close_s, close_s2, write_status, buff;
	char *file_content;

	buff = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_content = malloc(buff);
	open_f = open(argv[1], O_RDONLY);
	read_s = read(open_f, file_content, buff);
	open_f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (read_s == -1 || open_f == -1)
		{
			free(file_content);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_status = write(open_f2, file_content, read_s);
		if (write_status == -1 || open_f2 == -1)
		{
			free(file_content);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_s = read(open_f, file_content, buff);
		open_f2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_s > 0);
	close_s = close(open_f);
	close_s2 = close(open_f2);
	free(file_content);
	if (close_s2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_f2);
	else if (close_s == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_f);
	if (close_s2 == -1 || close_s == -1)
		exit(100);
	return (0);
}
