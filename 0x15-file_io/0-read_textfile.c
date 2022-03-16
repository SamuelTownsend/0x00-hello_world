#include "main.h"
/*
 * read_tetfile - check the code
 * @filename: pointer
 * @letters: size_t
 * return: checks and failures
*/
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lenr, lenw;
	int fd;
	char *buffer; 

	    if (filename == NULL)
        
                return (0);
        fd = open(filename, O_RDONLY);
	if (fd == -1)
	
		return (0);
	buffer = malloc(sizeof(char) *  letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	lenr = read(fd, buffer, letters);
	close(fd);

	
	if (lenr == -1)
	{
	free(buffer);
	return (0);
	}

	lenw = write (STDOUT_FILENO, buffer, lenr);
	free(buffer);
	
	if (lenr!= lenw)
	{
		return (0);
	}

	return (lenw);
}
