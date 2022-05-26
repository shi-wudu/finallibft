/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:12:30 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/21 19:17:02 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*stri;

	if (!dst && !src)
		return (NULL);
	str = dst;
	stri = src;
	i = -1;
	while (++i < n)
		str[i] = stri[i];
	return (str);
}
