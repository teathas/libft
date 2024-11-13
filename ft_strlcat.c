/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:10:24 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/13 13:49:12 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	if (!dst && size == 0)
		return (NULL);
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (size == 0)
		return (src_l);
	if (dst_l >= size)
		return (src_l + size);
	i = 0;
	while (src[i] && i < size - dst_l - 1)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
