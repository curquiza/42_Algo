/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a09_basic_09.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:17:02 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 21:17:03 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_bigc_test.h"

int		bigc_basic_09(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	setlocale(LC_ALL, "");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%C", 0xdb02);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%C", 0xdb02);
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
