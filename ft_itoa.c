/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberkass <aberkass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:55:17 by aberkass          #+#    #+#             */
/*   Updated: 2024/11/02 21:58:33 by aberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	if (n == 0)
		return (len);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *res, unsigned int nbr, int len)
{
	while (nbr)
	{
		res[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;

	len = ft_nbr_len(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	ft_fill(res, n, len);
	return (res);
}
