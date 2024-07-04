/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:09:45 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:09:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n) 
{
    char *result;
    int neg;
    int length;
    int temp;

    neg = 0;
    length = 0;

    if (n == 0) 
    {
        result = (char *)malloc(2 * sizeof(char));
        if (result == NULL) 
        {
            return NULL;
        }
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    if (n < 0) 
    {
        neg = 1;
        temp = -n;
        length++;
    } 
    else 
    {
        temp = n;
    }

    int temp_length = temp;
    while (temp_length > 0)
    {
        temp_length /= 10;
        length++;
    }

    result = (char *)malloc((length + 1) * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }

    result[length] = '\0';
    while (length > neg) 
    {
        length--;
        result[length] = '0' + (temp % 10);
        temp /= 10;
    }

    if (neg)
    {
        result[0] = '-';
    }

    return result;
}
/*
#include <stdio.h>
int main() 
{
    int number = -12345;
    char *str = ft_itoa(number);

    if (str == NULL) 
    {
        printf("Nie powiodło się.\n");
        return 1;
    }

    printf("Liczba %d po konwersji: %s\n", number, str);

    free(str);
    return 0;
}
*/