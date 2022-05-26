/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:08:35 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/22 17:08:35 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;
	int		j;

	i = 0;
	i = ft_strlen(s);
	dup = (malloc(sizeof(char) * (i + 1)));
	if (!dup)
		return (NULL);
	j = 0;
	while (s[j])
	{
		dup[j] = s[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
