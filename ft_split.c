/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:08:00 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/09 22:18:06 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wc);
}

char	**ft_split(char const	*s, char c)
{
	char		**splited;
	int			i;
	size_t		word_size;
	size_t		start;

	if (!s)
		return (NULL);
	splited = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break;
		start = s;
		while (*s == c && *s)
		{
			s++;
		}
		word_size = s - start;
		splited[i++] = ft_substr(start, 0, word_size);
		if (!splited[i])
		{
			while (i > 0)
			{
				free(splited[--i]);
			}
			free(splited);
			return (NULL);
		}
	}
	splited[i] = NULL;
	return (splited);
}
