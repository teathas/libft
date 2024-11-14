/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:07:37 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/14 10:43:09 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;

	if (!src && !dst)
		return (NULL);
	if (src == dst)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (src < dst)
	{
		tmp_dst += n;
		tmp_src += n;
		while (n--)
			*(--tmp_dst) = *(--tmp_src);
	}
	else
	{
		while (n--)
			*(tmp_dst++) = *(tmp_src++);
	}
	return (dst);
}
