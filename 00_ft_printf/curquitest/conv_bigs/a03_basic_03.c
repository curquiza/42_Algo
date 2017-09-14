/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a03_basic_03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:56:25 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 10:56:26 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_bigs_test.h"

int		bigs_basic_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;
	wchar_t	s[4];

	s[0] = 'a';
	s[1] = 254;
	s[2] = 'b';
	s[3] = '\0';
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%S", s);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%S", s);
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