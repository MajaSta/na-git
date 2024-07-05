/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:03:15 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:03:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int num;

    if (n < 0)
    {
        write(fd, "-", 1);
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num >= 10)
    {
        ft_putnbr_fd(num / 10, fd);
    }

    char digit = num % 10 + '0';
    write(fd, &digit, 1);
}
