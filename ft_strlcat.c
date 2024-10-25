/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:17:10 by mait-you          #+#    #+#             */
/*   Updated: 2024/10/25 09:55:02 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dstsize <= src_len)
		return (dstsize + src_len);
	i = 0;
	while (src && i < (dstsize - dst_len - 1))
	{
		*(dst + dst_len + i) = *(src++);
		i++;
	}
	*(dst + dst_len + i) = '\0';
	return (dst_len + src_len);
}
