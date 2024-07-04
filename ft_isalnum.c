/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:01:39 by marvin            #+#    #+#             */
/*   Updated: 2024/07/03 16:01:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
       return (1);
    }
    else
    {
        return (0);
    }
}
/*
int main()
{
    char test_chars[] = { 'A', 'z', '0', '9', '!', ' ', '\n' };
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++)
     {
        int result = ft_isalnum(test_chars[i]);
        if (result) 
        {
            printf("Character '%c' (ASCII %d) is alphanumeric.\n", test_chars[i], test_chars[i]);
        } 
        else 
        {
            printf("Character '%c' (ASCII %d) is not alphanumeric.\n", test_chars[i], test_chars[i]);
        }
    }
    return 0;
}*/
