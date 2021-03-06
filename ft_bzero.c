/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:45:33 by amaach            #+#    #+#             */
/*   Updated: 2019/10/24 19:41:40 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	int				i;

	i = 0;
	b = s;
	while (i < (int)n)
	{
		b[i] = (unsigned char)'\0';
		i++;
	}
}
