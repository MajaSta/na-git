/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:02:00 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:02:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len;
    char *result;
    unsigned int i;

    if (s == NULL || f == NULL)
    { 
        return NULL;
    }

    len = ft_strlen(s);
    result = (char *)malloc(len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++; 
    }

    result[len] = '\0';

    return result;
}