/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:02:21 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:02:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dst[50] = "Hello, ";
	const char *src = "world!";
	size_t size = 50;
	size_t result;

	result = ft_strlcat(dst, src, size);

	printf("Resulting string: '%s'\n", dst);
	printf("Total length: %zu\n", result);

	return 0;
}
*/
