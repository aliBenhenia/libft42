/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:31:45 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 10:31:49 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	if (!dstsize && !dst)
	{
		return (ft_strlen(src));
	}
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dstsize <= dl)
	{
		return (sl + dstsize);
	}
	i = 0;
	while (src[i] != '\0' && (i + dl < dstsize - 1))
	{
		dst[i + dl] = src[i];
		i++;
	}
	dst[i + dl] = '\0';
	return (sl + dl);
}
