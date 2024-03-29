/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolvakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:21:32 by akolvakh          #+#    #+#             */
/*   Updated: 2019/04/15 13:21:33 by akolvakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\v' ||
	c == '\n' || c == '\f' || c == '\r'))
		return (1);
	return (0);
}
