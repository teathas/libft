/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:08:00 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/05 21:31:00 by aberkass         ###   ########.fr       */
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
			s++;
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i])
			s++;
	}
	return (wc);
}

char	**ft_split(char const	*s, char c)
{
	char		**splited;
	int			i;
	size_t		word_size;

	splited = (char **)malloc((ft_wc(s) + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s)
		{
			if (ft_strchr(s, c) == 0)
				word_size = ft_strlen(s);
			else
				word_size = ft_strchr(s, c) - s;
			splited[i] = ft_substr(s, 0, word_size);
			i++;
			s += word_size;
		}
	}
	splited[i] = NULL;
	return (splited);
}
