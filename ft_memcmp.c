/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:45:07 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/08 18:37:25 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_t;
	unsigned char	*s2_t;
	size_t			i;

	s1_t = s1;
	s2_t = s2;
	i = 0;
	while (i < n)
	{
		if (s1_t[i] != s2_t[i])
			return (s1_t[i] - s2_t[i]);
		i++;
	}
	return (0);
}
