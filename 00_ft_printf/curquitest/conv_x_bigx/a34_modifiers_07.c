/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a34_modifiers_07.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:03:00 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 12:03:01 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_x_bigx_test.h"

int		x_modifiers_07(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%zx", 65423000000);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%zx", 65423000000);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	ret = 0;
	if (data.r1 != data.r2)
		ret = -1;
	if (ft_strcmp(data.s1, data.s2))
		ret = -1;
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	return (ret);
}
