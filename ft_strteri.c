/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:45 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)) 
{
    unsigned int    indx;

    if (s == NULL || f == NULL) 
    {
        return;
    }

    indx = 0;
    while(*s)
    {
        f(indx, s);
        s++;
        indx++;
    }
    
    
}