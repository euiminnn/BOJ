/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:28:16 by echung            #+#    #+#             */
/*   Updated: 2021/04/02 23:51:49 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chess.h"

void	cut(char *box, int m, int n)
{
	int i;
	int j;
	int count = 64;
	
	i = 0;
	while (i < n - 8 + 1)
	{
		j = 0;
		while (j < m - 8 + 1)
		{
			if (em_compare(box, m, n, i, j) < count)
				count = em_compare(box, m, n, i, j);
			j++;
		}
		i++;
	}
	printf("\nmin count: %d", count);
}
