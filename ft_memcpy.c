/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:09:23 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 22:09:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if (n == 0)
    {
        return dest;
    }
    
    if (!dest || !src)
    {
        return NULL;
    }
    
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    
    for (i = 0; i < n; i++)
    {
        d[i] = s[i];
    }
    
    return dest;
}

/*
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (n == 0)
	{
		return (dest);
	}
	if (!dest || !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

ft_memcpy.c: Error!
Error: MISALIGNED_VAR_DECL  (line:  18, col:  21):	Misaligned variable declaration
Error: MISALIGNED_VAR_DECL  (line:  19, col:  25):	Misaligned variable declaration

