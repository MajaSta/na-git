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
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

#include <stdio.h>

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