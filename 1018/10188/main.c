/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:14:35 by echung            #+#    #+#             */
/*   Updated: 2021/04/02 23:33:17 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chess.h"

int		main(void)
{
	char box[2500];
	int m;
	int n;
	int i;
	int len;

	scanf("%d %d", &m, &n);
	i = 0;
	len = (m + 1) * n;
	while (i < len)
	{
		scanf("%c", &box[i]);
		i++;
	}
	em_cut(box, m, n);
	em_compare(box, m, n);
//	em_copy_box(len);
//	em_char_to_num(box, len);
//? if input error ?
//	em_print_box(box, len);
	return (0);
}
