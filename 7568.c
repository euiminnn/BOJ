/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7568.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:38:28 by echung            #+#    #+#             */
/*   Updated: 2021/03/31 01:01:01 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int weight[50];
int height[50];
int rank[50];
int n;

void	em_rank(int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		rank[i] = 1;
		while (j < n)
		{
			if (weight[i] < weight[j] && height[i] < height[j])
				rank[i]++;
			j++;
		}
		printf("%d ", rank[i]);
		i++;
	}
}

int		main(void)
{
	int i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &weight[i], &height[i]);
		i++;
	}
	em_rank(n);
	return (0);
}
