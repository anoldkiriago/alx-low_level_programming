#include "main.h"

/**
 * create_file - Entry point
 * @filename: nameof file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int myfile, result = 1, countn = 0;

	if (!filename)
		return (-1);

	myfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (myfile == -1)
		return (-1);
	if (text_content)
	{
	while (text_content[countn])
	countn++;
	result = write(myfile, text_content, countn);
	}

	if (result == -1)
	return (-1);
	close(myfile);
	return (1);
}
