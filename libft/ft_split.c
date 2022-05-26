/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:39:13 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/26 12:44:03 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_contar(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**splitado;
	char	*stri;
	size_t	num;

	if (!s)
		return (NULL);
	num = ft_contar(s, c);
	splitado = (malloc(sizeof(char *) * (num + 1)));
	if (splitado == NULL)
		return (NULL);
	stri = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (stri != s)
				*(splitado++) = ft_substr(stri, 0, s - stri);
			stri = (char *)s + 1;
		}
		s++;
	}
	if (stri != s)
	*(splitado++) = ft_substr(stri, 0, s - stri);
	*splitado = 0;
	return (splitado - num);
}
