/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:56 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] && s2[i])
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }

    if (i < n)
    {
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }

    return 0;
}
/*
int main()
{
    printf("Test 1: %d\n", ft_strncmp("hello", "hello", 5)); // 0
    printf("Test 2: %d\n", ft_strncmp("hello", "hella", 5)); // różnica między 'o' a 'a'
    printf("Test 3: %d\n", ft_strncmp("hello", "hell", 5));  // różnica między 'o' a '\0'
    printf("Test 4: %d\n", ft_strncmp("hell", "hello", 5));  // różnica między '\0' a 'o'
    printf("Test 5: %d\n", ft_strncmp("abc", "def", 2));     // różnica między 'a' a 'd'
    
    return 0;
}*/