/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:23:21 by maleandr          #+#    #+#             */
/*   Updated: 2022/04/11 11:23:21 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*resultado;

	if (s == NULL || f == NULL)
		return (NULL);
	resultado = ft_strdup(s);
	if (resultado == NULL)
		return (NULL);
	i = -1;
	while (resultado[++i])
	{
		resultado[i] = f(i, resultado[i]);
	}
	return (resultado);
}
