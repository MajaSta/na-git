/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:51 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    if (s != NULL)
    {
        while (*s)
        {
            if (*s == (char)c)
            {
                last = s;
            }
            s++;
        }

        if ((char)c == '\0')
        {
            return (char *)s;
        }

        return (char *)last;
    }

    return NULL;
}

/*
#include <stdio.h>
int main()
{
    int ch = '\0';
    const char* str = "Hello barbara";
    char *result = ft_strrchr(str, ch);
    printf("%ld", result - str);
    return (0);
}*/
