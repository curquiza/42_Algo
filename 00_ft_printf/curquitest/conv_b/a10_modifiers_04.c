/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a10_modifiers_04.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:10:05 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 21:23:21 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_b_test.h"

int		b_modifiers_04(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%llb", 0x77889944abab);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.s2 = ft_strjoin("0111 0111 1000 1000 1001 1001 0100 0100 1010",
						" 1011 1010 1011");
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
