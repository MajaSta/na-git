/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:48 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t needle_len;

    if (!needle[0])
    {
        return ((char *)haystack);
    }

    needle_len = ft_strlen(needle);

    if (needle_len == 0)
    {
        return ((char *)haystack);
    }

    i = 0;
    while (haystack[i] && i + needle_len <= len)
    {
        j = 0;
        while (haystack[i + j] && needle[j] && (i + j < len) && (haystack[i + j] == needle[j]))
        {
            j++;
        }

        if (!needle[j])
        {
            return ((char *)(haystack + i));
        }

        i++;
    }

    return (NULL);
}

/*
#include <stdio.h>
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "o";
    size_t len = 13;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("'%s' found in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
    }

    return 0;
}*/
