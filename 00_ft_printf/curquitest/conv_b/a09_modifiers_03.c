/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a09_modifiers_03.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:09:33 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 21:22:57 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_b_test.h"

int		b_modifiers_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%lb", -12345678900);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.s2 = ft_strjoin("1111 1111 1111 1111 1111 1111 1111 1101 0010",
							" 0000 0010 0011 1110 0011 1100 1100");
	data.r2 = ft_strlen(data.s2);
	ret = 0;
	if (data.r1 != data.r2)
		ret = -1;
	if (ft_strcmp(data.s1, data.s2))
		ret = -1;
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	return (ret);
}
