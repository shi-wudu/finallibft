/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:06:33 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/21 17:06:33 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str1, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!*str1)
		return ((char *)str);
	while (str[a] != '\0' && a < len)
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == str1[b] \
		&& (a + b) < len && str1[b] != '\0')
		{
			if (str1[b + 1] == '\0')
				return ((char *)&(str[a]));
			b++;
		}
		a++;
	}
	return (0);
}
