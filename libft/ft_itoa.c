/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:47:13 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/25 19:47:13 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_size(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		size;

	size = ft_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	new = (malloc(sizeof(char) * (size + 1)));
	if (new == NULL)
		return (NULL);
	new[size--] = '\0';
	if (n < 0)
	{
		new[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		new[0] = '0';
	while (n > 0)
	{
		new[size] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (new);
}
