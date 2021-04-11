/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:19:36 by echung            #+#    #+#             */
/*   Updated: 2021/04/02 23:19:44 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chess.h"

int		min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	em_print_box(char *box, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		printf("%c", box[i]);
		i++;
	}
}
