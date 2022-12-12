/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:49:34 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/14 09:49:35 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	len--;
	while (len >= 0 && ft_strchr(set, s1[len]) != NULL)
		len--;
	if (len - i < 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, len - i + 1));
}
