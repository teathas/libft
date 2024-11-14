/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:25 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/14 10:39:16 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	if (src == dst)
		return (dst);
	tmp_src = (unsigned char *) src;
	tmp_dst = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
