/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:58:03 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/21 15:58:03 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*stri1;
	unsigned char	*stri2;

		stri1 = (unsigned char *)str1;
		stri2 = (unsigned char *)str2;
		i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (stri1[i] - stri2[i] != 0)
			return (stri1[i] - stri2[i]);
				i++;
	}
	return (0);
}
