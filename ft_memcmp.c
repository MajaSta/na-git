/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:09:29 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:09:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp (const void *ptr1, const void *ptr2, size_t num)
{
    size_t  i;

    i = 0; 

    while (i < num)
    {
        if (*(unsigned char*)(ptr1 + i) != *(unsigned char*)(ptr2 + i))
        {
            return (*(unsigned char*)(ptr1 + i)) - (*(unsigned char*)(ptr2 +i));
        }
        i++;
    }
    return (0);
}