/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:32:05 by mait-you          #+#    #+#             */
/*   Updated: 2024/10/25 09:31:17 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;

	if (!len || !src || !dst)
		return (dst);
	ptr = (unsigned char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*(ptr + len) = *(const unsigned char *)(src + len);
	}
	return (dst);
}
