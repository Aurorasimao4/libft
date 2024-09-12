/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:10:05 by asimao            #+#    #+#             */
/*   Updated: 2024/05/19 17:10:12 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	src_len = ft_strlen(src);
	count = 0;
	if (size > 0)
	{
		while (count < size - 1 && src[count] != '\0')
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (src_len);
}
