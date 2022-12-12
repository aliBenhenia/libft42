/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:34:07 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 08:34:11 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dd;
	char	*ss;

	dd = dst;
	ss = (char *) src;
	if (dd == ss)
	{
		return (dst);
	}
	if (dd > ss)
	{
		while (len)
		{
			*(dd + len - 1) = *(ss + len - 1);
			len--;
		}
	}
	else
	{
		ft_memcpy(dd, ss, len);
	}
	return (dst);
}
