#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
 * close_file - function
 * @fd: parameter
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
void copy_content(int file_from, int file_to, const char
*file_from_name, const char *file_to_name)
{
ssize_t bytes_read;
ssize_t bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_name);
close_file(file_from);
close_file(file_to);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_name);
close_file(file_from);
close_file(file_to);
exit(98);
}
}
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from;
int file_to;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_file(file_from);
exit(99);
}
copy_content(file_from, file_to, argv[1], argv[2]);
close_file(file_from);
close_file(file_to);
return (0);
}
