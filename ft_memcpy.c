/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:04:59 by asimao            #+#    #+#             */
/*   Updated: 2024/05/19 17:05:05 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ddest;
	const char	*ssrc;

	ddest = (char *)dest;
	ssrc = (const char *)src;
	while (n-- > 0)
		*ddest++ = *ssrc++;
	return (dest);
}
