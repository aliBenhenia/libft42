/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:38:24 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/21 18:38:27 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	size_t			len;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s) + 1;
	i = 0;
	p = malloc(len * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	while (i < len - 1)
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
