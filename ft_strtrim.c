/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <mait-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:03:48 by mait-you          #+#    #+#             */
/*   Updated: 2024/10/25 09:48:20 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	fc;
	char	lc;
	size_t	ptr_len;

	if (!s1 || !set)
		return (ft_strdup(""));
	fc = *s1;
	lc = *(s1 + ft_strlen(s1) - 1);
	if (trim(fc, set))
		s1++;
	ptr_len = ft_strlen(s1);
	if (trim(lc, set))
		ptr_len--;
	ptr = (char *)ft_calloc(ptr_len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ptr_len);
	return (ptr);
}
