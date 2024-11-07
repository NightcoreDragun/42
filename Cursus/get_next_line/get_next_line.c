#include "get_next_line.h"

static char	*read_line(int fd, char *saved)
{
	char	*buffer = malloc(BUFFER_SIZE + 1);
	ssize_t	bytes_read;

	if (!buffer)
		return (NULL);
	while (!ft_strchr(saved, '\n') && (bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		saved = ft_strjoin(saved, buffer);
		if (!saved)
		{
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	if (bytes_read < 0)
	{
		free(saved);
		return (NULL);
	}
	return (saved);
}

static char	*extract_line(char *saved)
{
	size_t	i = 0;
	char	*line;

	if (!saved || !*saved)
		return (NULL);
	while (saved[i] && saved[i] != '\n')
		i++;
	line = ft_substr(saved, 0, i + (saved[i] == '\n' ? 1 : 0));
	return (line);
}

static char	*save_remainder(char *saved)
{
	size_t	i = 0;
	char	*remainder;

	while (saved[i] && saved[i] != '\n')
		i++;
	if (!saved[i])
	{
		free(saved);
		return (NULL);
	}
	remainder = ft_strdup(saved + i + 1);
	free(saved);
	return (remainder);
}

char	*get_next_line(int fd)
{
	static char	*saved;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	saved = read_line(fd, saved);
	if (!saved)
		return (NULL);
	line = extract_line(saved);
	saved = save_remainder(saved);
	return (line);
}
