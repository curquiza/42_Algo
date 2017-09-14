/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_score.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:34:24 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/14 12:34:33 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	ft_put_one_score(char *name, int success, int total, char *col)
{
	int		i;

	ft_putstr_col(BEFORE_SCORE_NAME, col, DEF);
	ft_putstr_col(name, col, DEF);
	i = ft_strlen(name);
	while (i < MAX_NAME_LEN)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar(' ');
	ft_putnbr_col(success, col, DEF);
	ft_putstr_col("/", col, DEF);
	ft_putnbr_col(total, col, DEF);
	ft_putchar('\n');
}

static void	ft_put_score(t_score *score)
{
	char	*col;

	col = NULL;
	while (score)
	{
		col = ft_strdup((score->success == score->total ? GREEN : RED));
		ft_put_one_score(score->name, score->success, score->total, col);
		ft_strdel(&col);
		score = score->next;
	}
}

int			ft_get_final_score(t_score **score)
{
	int		success;
	int		total;
	t_score	*tmp;
	char	*col;

	success = 0;
	total = 0;
	ft_put_score(*score);
	tmp = *score;
	while (tmp)
	{
		success += tmp->success;
		total += tmp->total;
		tmp = tmp->next;
	}
	col = ft_strdup((success == total ? GREEN : RED));
	ft_putstr(BEFORE_SCORE_NAME);
	ft_putendl_col("----------------------------", B_YELLOW, DEF);
	ft_put_one_score("TOTAL", success, total, col);
	ft_putstr(BEFORE_SCORE_NAME);
	ft_putendl_col("----------------------------", B_YELLOW, DEF);
	ft_strdel(&col);
	ft_del_scorelst(score);
	return (success == total ? 0 : -1);
}
