#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define COUNT 128

int main()
{
	int fd;
	char buffer[256];

	fd = open ("./file.txt", O_RDONLY);

	if (fd < 0) {
		printf ("Error opening file - exit..");
		return 1;
	}

	while (read (fd, buffer, COUNT) > 0)
		write (STDOUT_FILENO, buffer, COUNT);
		

	close (fd);

	return 0;
}

