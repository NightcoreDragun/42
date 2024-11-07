#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (c == '\0' ? (char *)s : NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i = 0, j = 0;
	char	*new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1 && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	free(s1); // Free s1 as it's no longer needed
	return (new_str);
}

char	*ft_strdup(const char *s1)
{
	size_t	len = ft_strlen(s1);
	char	*copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	for (size_t i = 0; i < len; i++)
		copy[i] = s1[i];
	copy[len] = '\0';
	return (copy);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
