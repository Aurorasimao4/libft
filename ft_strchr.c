/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:08:09 by asimao            #+#    #+#             */
/*   Updated: 2024/05/19 17:08:18 by asimao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = -1;
	while (s[++count] != '\0')
		if (s[count] == character)
			return (&str[count]);
	if (character == '\0')
		return (&str[count]);
	return (0);
}
