/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a23_all_03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:44:19 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 11:44:20 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_u_bigu_test.h"

int		u_all_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("ko%-4.2hhu et %05.2u!", (unsigned char)-456, 0);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("ko%-4.2hhu et %05.2u!", (unsigned char)-456, 0);
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
