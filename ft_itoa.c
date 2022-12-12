/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:48:30 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/27 21:48:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if (n == 0 && i == 0)
	{
		i++;
		return (i);
	}
	return (++i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	long	n1;

	if (!n)
		return (ft_strdup("0"));
	n1 = n;
	i = count(n1);
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	if (n1 < 0)
	{
		p[0] = '-';
		n1 = n1 * -1;
	}
	p[i] = '\0';
	while (n1 > 0)
	{
		p[--i] = (n1 % 10) + 48;
		n1 = n1 / 10;
	}
	return (p);
}
