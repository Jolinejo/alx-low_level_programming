#include "main.h"
/**
 * append_text_to_file - Entry point
 * Description: to check if letter is uppercase
 * @filename: name
 * @text_content: let
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t open_file, write_status;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write_status = write(open_file, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);
	return (1);
}
