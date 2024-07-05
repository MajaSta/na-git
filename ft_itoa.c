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

static int	get_num_length(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	num;
	int		i;

	len = get_num_length(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	num = (long)n;
	if (n < 0)
		num = -num;
	i = len - 1;
	while (i >= 0)
	{
		result[i] = num % 10 + '0';
		num /= 10;
		if (n < 0 && i == 1)
		{
			result[0] = '-';
			break;
		}
		i--;
	}
	return (result);
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
