#include "main.h"
/**
 * read_textfile - function
 * @filename: function
 * @letters: function
 * Return: write_a
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int open_a;
ssize_t read_a;
ssize_t write_a;
char *buffer;

if (filename == NULL)
{
return (0);
}
open_a = open(filename, O_RDONLY);
if (open_a == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(open_a);
return (0);
}
read_a = read(open_a, buffer, letters);
if (read_a == -1)
{
free(buffer);
close(open_a);
return (0);
}
write_a = write(STDOUT_FILENO, buffer, read_a);
if (write_a == -1 || write_a != read_a)
{
free(buffer);
close(open_a);
return (0);
}
free(buffer);
close(open_a);
return (write_a);
}
