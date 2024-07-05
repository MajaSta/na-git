/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:37 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	size_t	substr_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));

	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;

	str = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!str)
		return (NULL);

	i = 0;
	while (i < substr_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';

	return (str);
}

/*
int main(void) 
{
    char *str;
    char *substr;

    // Przykład 1: Normalny przypadek
    str = "Hello, kworld!";
    substr = ft_substr(str, 5, 5);
    if (substr) 
    {
        printf("Przyklad 1: %s\n", substr);
        free(substr);
    } 
    else 
    {
        printf("Przyklad 1: Alokacja pamięci nie powiodła się\n");
    }

    return 0;
}
*/
