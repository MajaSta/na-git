/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:10:00 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:10:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(unsigned char c)
 {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
       return(1);
return(0);
}
/*
int main()
{
    char test_chars[] = { 'A', 'z', '0', '9', '!', ' ', 'k' };
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++)
     {
        int result = ft_isalpha(test_chars[i]);
        if (result) 
        {
            printf("Character '%c' (ASCII %d) is alpha.\n", test_chars[i], test_chars[i]);
        } 
        else 
        {
            printf("Character '%c' (ASCII %d) is not alpha.\n", test_chars[i], test_chars[i]);
        }
    }
    return 0;
}*/