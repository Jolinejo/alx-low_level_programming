#include "main.h"
/**
 * create_files - Entry point
 * Description: to check if letter is uppercase
 * @filename: name
 * @text_content: let
 * Return: int
 */
int create_files(const char *filename, char *text_content)
{
	int open_file, write_status, close_status;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (open_file == -1)
		return (-1);
	if (text_content != NULL)
		write_status = write(open_file, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(open_file);
		return (-1);
	}
	close_status = close(open_file);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_file);
		return (2);
	}
	return (1);
}

/**
 * cp - Entry point
 * Description: to check if letter is uppercase
 * @file_from: file from
 * @file_to: file to
 * Return: int
 */
int cp(const char *file_from, char *file_to)
{
	int read_status, open_file, close_status, write_status, buff;
	char *file_content;

	buff = 1024;
	if (file_from == NULL)
		return (98);
	open_file = open(file_from, O_RDONLY);
	if (open_file == -1)
		return (98);
	file_content = malloc(buff);
	if (file_content == NULL)
		return (99);
	read_status = read(open_file, file_content, buff);
	if (read_status == -1)
	{
		free(file_content);
		close(open_file);
		return (98);
	}
	write_status = create_files(file_to, file_content);
	free(file_content);
	if (write_status == -1)
	{
		close(open_file);
		return (99);
	}
	if (write_status == 2)
	{
		close(open_file);
		return (100);
	}
	close_status = close(open_file);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_file);
		return (100);
	}
	return (0);
}
/**
 * main - Entry point
 * Description: to check if letter is uppercase
 * @argc: num of inputs
 * @argv: inputs
 * Return: int
 */
int main(int argc, char *argv[])
{
	int codde;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	codde = cp(argv[1], argv[2]);
	if (codde == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (codde == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (codde == 100)
		exit(100);
	return (0);
}
