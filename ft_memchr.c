/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:04:06 by asimao            #+#    #+#             */
/*   Updated: 2024/05/19 17:04:14 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*block;

	block = (const char *)s;
	count = 0;
	while (count < n)
	{
		if (block[count] == (char)c)
			return ((void *)&block[count]);
		count++;
	}
	return (NULL);
}
