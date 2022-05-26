/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:19:20 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/28 12:55:42 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str;
	const char	*stri;

	str = dst;
	stri = src;
	i = -1;
	if (!str && !stri)
		return (0);
	if (str < stri)
	{
		while (++i < len)
			str[i] = stri[i];
	}
	else
	{
		i = len;
		while (i-- > 0)
			str[i] = stri[i];
	}
	return (str);
}
