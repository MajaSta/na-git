/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:02:48 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:02:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char const *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

char *malloc_word(char const *s, int start, int end)
{
    int i;
    char *word;

    word = (char *)malloc((end - start + 1) * sizeof(char));
    if (!word)
    {
        return NULL;
    }

    i = 0;
    while (start < end)
    {
        word[i++] = s[start++];
    }
    word[i] = '\0';

    return word;
}

char **ft_split(char const *s, char c)
{
    int words;
    char **result;
    int i;
    int start;
    int j;
    int in_word;

    if (!s)
    {
        return NULL;
    }

    in_word = 0;
    j = 0;
    start = 0;
    i = 0;

    words = count_words(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
    {
        return NULL;
    }

    while (s[j] != '\0')
    {
        if (s[j] != c && in_word == 0)
        {
            start = j;
            in_word = 1;
        }
        else if ((s[j] == c || s[j + 1] == '\0') && in_word == 1)
        {
            int end = (s[j] == c) ? j : j + 1;
            result[i] = malloc_word(s, start, end);
            if (!result[i])
            {
                while (i > 0)
                {
                    free(result[--i]);
                }
                free(result);
                return NULL;
            }
            i++;
            in_word = 0;
        }
        j++;
    }
    result[i] = NULL;
    return result;
}

/*
#include <stdio.h>

int main(void)
{
    char **result;
    char *str = "Hello, world! This is a test.";
    char delimiter = ' ';
    int i = 0;

    result = ft_split(str, delimiter);

    if (result)
    {
        while (result[i])
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}*/
