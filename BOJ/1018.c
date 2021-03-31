/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1018.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:38:22 by echung            #+#    #+#             */
/*   Updated: 2021/03/31 22:05:55 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	em_print_box(char *box, int len)
{
	int i;
	
	i = 0;
	while (i < len)
	{
		printf(" %c", box[i]);
		i++;
	}
}

int		main(void)
{
	char box[2500];
	int m;
	int n;
	int i;
	
	scanf("%d %d", &m, &n);
	i = 0;
	while (i < (m+1)*n)
	{
		scanf("%c", &box[i]);
		i++;
	}
	em_print_box(box, (m+1)*n);
	return (0);
}
