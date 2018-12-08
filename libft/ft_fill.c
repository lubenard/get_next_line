/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubenard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:29:24 by lubenard          #+#    #+#             */
/*   Updated: 2018/11/19 10:29:28 by lubenard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fill(char *s, char c)
{
	int i;

	i = 0;
	if (!s || !c)
		return (0);
	while (s[i])
		s[i++] = c;
	return (s);
}