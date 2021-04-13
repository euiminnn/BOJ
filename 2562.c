/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2562.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:35:22 by echung            #+#    #+#             */
/*   Updated: 2021/04/13 20:53:47 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	em_biggest(int* n)
{
	int i;
	int big;
	int bigi;
	
	i = 0;
	big = n[0];
	bigi = 0;
	while (i < 9)
	{
		if (big < n[i])
		{
			big = n[i];
			bigi = i;
		}
		i++;
	}
	printf("%d\n", big);
	printf("%d", bigi+1);
}

int		main(void)
{
	int n[9];
	int i;

	i = 0;
	while (i < 9)
	{
		scanf("%d", &n[i]);
		i++;
	}
	em_biggest(n);
	return (0);
}
