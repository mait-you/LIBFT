/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:45:37 by mait-you          #+#    #+#             */
/*   Updated: 2024/10/22 19:46:01 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;

	cc = (unsigned char)c;
	ss = (unsigned char *)s;
	while (*ss && n--)
	{
		if (*ss == cc)
			return ((void *)s);
		s++;
		ss++;
	}
	if (cc == '\0')
		return ((void *)s);
	return (NULL);
}
