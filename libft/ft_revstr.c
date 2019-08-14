/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolvakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:20:37 by akolvakh          #+#    #+#             */
/*   Updated: 2019/04/15 13:20:38 by akolvakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_revstr(char *c)
{
	char	*z;
	char	a;

	z = c + ft_strlen(c) - 1;
	while (c < z)
	{
		a = *c;
		*c++ = *z;
		*z-- = a;
	}
}
