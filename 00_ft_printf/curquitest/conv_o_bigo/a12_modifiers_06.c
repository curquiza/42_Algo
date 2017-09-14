/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a12_modifiers_06.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:27:21 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 11:31:49 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_o_bigo_test.h"

int		o_modifiers_06(void)
{
	t_data		data;
	int			pfd[2];
	int			ret;
	int			save_stdout;
	uintmax_t	i;

	i = -14785000;
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%jo", i);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%jo", i);
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
