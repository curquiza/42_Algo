/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 21:26:37 by curquiza          #+#    #+#             */
/*   Updated: 2017/04/22 21:26:40 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lower(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + 32;
		s++;
	}
}
