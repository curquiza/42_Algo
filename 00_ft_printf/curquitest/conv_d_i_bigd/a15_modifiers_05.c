/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a15_modifiers_05.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:14:06 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 11:24:10 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_d_i_bigd_test.h"

int		d_modifiers_05(void)
{
	t_data		data;
	int			pfd[2];
	int			ret;
	int			save_stdout;
	intmax_t	i;

	i = 0x1789;
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%jd", i);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%jd", i);
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
