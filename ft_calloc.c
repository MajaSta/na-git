/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:01:35 by marvin            #+#    #+#             */
/*   Updated: 2024/07/03 16:01:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *)malloc(count * size);

    if (!ptr)
    {
        return NULL;
    }

    ft_bzero(ptr, count * size);

    return ptr;
}
/*
#include <stdio.h>
int main() 
{
    int *arr;
    size_t count = 0;
    size_t size = sizeof(int);

    arr = (int *)ft_calloc(count, size);
    if (arr == NULL) 
    {
        printf("Alokacja pamięci nie powiodła się\n");
        return 1;
    }
}*/