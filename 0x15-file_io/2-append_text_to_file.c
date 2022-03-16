#include "main.h"
/*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int x = -1, fd, f_write = 0, len = 0;
	if (!filename)
	return (x);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd != -1)
	{
	if (text_content)
	{
	while (text_content[len])
	len++;
	f_write = fwrite(fd, text_content, len);
	}
	if (f_write != -1)
	x = 1;
	pclose(fd);
	}
	return (x);
}
