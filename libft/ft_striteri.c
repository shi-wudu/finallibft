/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:34:29 by maleandr          #+#    #+#             */
/*   Updated: 2022/05/26 11:11:37 by rdas-nev         ###   ########.fr       */
/*                    								                          */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	ii = 0;
	if (!s)
		return ;
	i = ft_strlen(s);
	while (ii < i)
	{
		(*f)(ii, s);
		ii++;
		s++;
	}
}
