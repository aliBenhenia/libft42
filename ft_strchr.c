/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:26:15 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:26:20 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *) s;
	while (*p != '\0')
	{
		if (*p == (char)c)
			return ((char *)p);
		p++;
	}
	if (c == 0)
		return (p);
	return (NULL);
}
