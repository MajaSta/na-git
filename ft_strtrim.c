/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:01:41 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:01:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    size_t start;
    size_t end;
    size_t new_len;
    char *trimmed_str;

    end = ft_strlen(s1);
    start = 0;
    i = 0;

    if (!s1 || !set)
    {
        return NULL;
    }
    
    while (s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
     while (end > start && ft_strchr(set, s1[end - 1]))
     {
        end--;
    }

    // Alokacja pamięci dla nowego łańcucha
    new_len = end - start;
    trimmed_str = (char *)malloc(new_len + 1);
   
    if (!trimmed_str)
    {
        return NULL;
    }

    // Skopiowanie odpowiednich znaków
    if (trimmed_str)
    ft_strlcpy(trimmed_str, &s1[i], new_len + 1);

    return (trimmed_str);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *trimmed_str;

    // Test podstawowy
    trimmed_str = ft_strtrim(s1, set);
    if (trimmed_str)
    {
        printf("Original: \"%s\"\n", s1);
        printf("Trimmed: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Test z innym zestawem znaków
    char *s2 = "abcHello, World!cba";
    set = "abc";
    trimmed_str = ft_strtrim(s2, set);
    if (trimmed_str)
    {
        printf("Original: \"%s\"\n", s2);
        printf("Trimmed: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Test z pustym łańcuchem
    char *s3 = "";
    trimmed_str = ft_strtrim(s3, set);
    if (trimmed_str)
    {
        printf("Original: \"%s\"\n", s3);
        printf("Trimmed: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Test z pustym zestawem znaków
    char *s4 = "Hello, World!";
    set = "";
    trimmed_str = ft_strtrim(s4, set);
    if (trimmed_str)
    {
        printf("Original: \"%s\"\n", s4);
        printf("Trimmed: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
}