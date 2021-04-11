/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:16:36 by echung            #+#    #+#             */
/*   Updated: 2021/04/02 23:53:35 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chess.h"

int		em_compare(char *box, int m, int n, int i, int j)
{
	int w_count = 0;
	int b_count = 0;
	int n_count = 0;
	int len;
	int ret = 0;

	len = (m + 1) * n;
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] != 'W')
			w_count++;
		else if (i % 2 != 0 && box[i] != 'B')
			w_count++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] != 'B')
		{
			b_count++;
		}
		else if (i % 2 != 0 && box[i] != 'W')
		{
			b_count++;
		}
		i++;
	}
	ret = min(w_count, b_count);
	return (ret);
}
