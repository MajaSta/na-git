/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:09:34 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:09:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

    i = 0;
    
    while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
		{
			return ((void*)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
    const char str[] = "Hello, world";
    char *result = ft_memchr(str, 'w', 13);

    if (result != NULL)
    {
        printf("Found 'W' at position: %ld\n", result - str);
    }
    else
    {
        printf("'W' not found\n");
    }
    
    return 0;
}*/
