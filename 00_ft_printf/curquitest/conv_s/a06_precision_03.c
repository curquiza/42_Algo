/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a06_precision_03.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:35:49 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 11:35:50 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_s_test.h"

int		s_precision_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%.0s", "coco et ti");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%.0s", "coco et ti");
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
