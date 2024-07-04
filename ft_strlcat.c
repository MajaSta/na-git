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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t total_len = dst_len + src_len;
    size_t i = 0;
    
    if (size <= dst_len)
    {
        return total_len; // Jeśli size jest mniejsze lub równe długości dst, zwróć sumaryczną długość
    }
	
    while (src[i] != '\0' && dst_len + 1 < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    
    return total_len;
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
