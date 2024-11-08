/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:56:48 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/02 21:56:52 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*sub;

	if (s == NULL)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	j = 0;
	while (start < ft_strlen(s) && j < len)
	{
		sub[j] = s[start];
		j++;
		start++;
	}
	sub[j] = '\0';
	return (sub);
}
