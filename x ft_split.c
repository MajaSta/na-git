#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count = 0;
	int		in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memcpy(word, s + start, end - start);
	word[end - start] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i = 0, j = 0, start = -1;
	char	**split;
	size_t	len;

	if (!s)
		return (NULL);
	len = strlen(s);
	split = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i <= len)
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == len) && start != -1)
		{
			split[j++] = word_dup(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
