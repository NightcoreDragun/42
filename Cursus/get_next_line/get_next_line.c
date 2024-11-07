/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:40:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/11/07 13:43:24 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*allocate_and_read(int fd, char *saved, char *buffer)
{
	ssize_t	bytes_read;

	while (!ft_strchr(saved, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(saved);
			saved = NULL;
			return (NULL);
		}
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		saved = ft_strjoin(saved, buffer);
		if (!saved)
			return (NULL);
	}
	return (saved);
}

static char	*read_line(int fd, char *saved)
{
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	saved = allocate_and_read(fd, saved, buffer);
	free(buffer);
	if (!saved || (saved && *saved == '\0'))
	{
		free(saved);
		return (NULL);
	}
	return (saved);
}

static char	*extract_line(char *saved)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!saved || !*saved)
		return (NULL);
	while (saved[i] && saved[i] != '\n')
		i++;
	if (saved[i] == '\n')
		line = ft_substr(saved, 0, i + 1);
	else
		line = ft_substr(saved, 0, i);
	return (line);
}

static char	*save_remainder(char *saved)
{
	size_t	i;
	char	*remainder;

	i = 0;
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
