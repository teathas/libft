/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:14:54 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/14 10:55:10 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*tmp;

	i = 0;
	a = (char)c;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			tmp = (char *)&s[i];
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	return (tmp);
}
