/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:25 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/13 21:25:30 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t_s;
	unsigned char	*t_d;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	t_s = (unsigned char *) src;
	t_d = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		t_d[i] = t_s[i];
		i++;
	}
	return (dst);
}
