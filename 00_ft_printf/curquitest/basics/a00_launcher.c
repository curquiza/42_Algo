/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a00_launcher.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:08:36 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 21:08:36 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics_test.h"

int		basics_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- BASICS -----------------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "test_01", &basics_test_01);
	ft_load_test(&test, "test_02", &basics_test_02);
	return (ft_launch_tests(&test, success, total));
}
