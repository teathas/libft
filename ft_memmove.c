/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:07:37 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/14 10:40:40 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*t_dst;
	unsigned char		*t_src;

	if (!src && !dst)
		return (NULL);
	if (src == dst)
		return (dst);
	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	if (src < dst)
	{
		t_dst += n;
		t_src += n;
		while (n--)
			*(--t_dst) = *(--t_src);
	}
	else
	{
		while (n--)
			*(t_dst++) = *(t_src++);
	}
	return (dst);
}
