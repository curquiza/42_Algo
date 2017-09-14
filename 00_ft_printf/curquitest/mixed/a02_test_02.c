/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a02_test_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:27:42 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 12:27:46 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mixed_test.h"

int		mix_test_02(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%--.4u et %#O%#012O%1lc\n", -12, 0, 0, 95);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%--.4u et %#O%#012O%1lc\n", -12, 0, 0, 95);
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