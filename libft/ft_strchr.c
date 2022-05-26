/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:46:22 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/21 14:46:22 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*stri;

	stri = (unsigned char *)str;
	while (*stri != (unsigned char)c)
	{
		if (!*stri)
			return (NULL);
		stri++;
	}
	return ((char *)stri);
}
