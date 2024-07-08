#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!needle[0])
		return ((char *)haystack);

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);

	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (i + j < len)
			&& (haystack[i + j] == needle[j]))
			j++;

		if (!needle[j])
			return ((char *)(haystack + i));

		i++;
	}

	return (NULL);
}
