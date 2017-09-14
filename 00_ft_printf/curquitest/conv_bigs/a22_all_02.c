/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a22_all_02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:57:22 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 10:57:24 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_bigs_test.h"

int		bigs_all_02(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;
	wchar_t	s[4];

	s[0] = 0x53;
	s[1] = 0x3abc;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%9.6ls %S", s, (wchar_t *)'a');
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%9.6ls %S", s, (wchar_t *)'a');
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