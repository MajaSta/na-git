/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:02:25 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:02:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t len1, len2;

    if (!s1 || !s2)
        return (NULL);

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    result = (char *)malloc(len1 + len2 + 1);
    if (!result)
        return (NULL);

    ft_strcpy(result, s1);
    ft_strcpy(result + len1, s2);

    return (result);
}

