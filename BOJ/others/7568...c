/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7568.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:38:28 by echung            #+#    #+#             */
/*   Updated: 2021/03/29 21:08:56 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int weight[50];
int height[50];
int n;

void	em_sort(int* arr, int *rank)
{
	int sorted[n];
	int temp;
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		sorted[i] = arr[i];
		i++;
	}

	i = 1;
	while (i < n)
	{
		j = 0;
		while (j < n - i)
		{
			if (sorted[j] < sorted[j + 1])
			{
				temp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (arr[i] == sorted[j])
				rank[i] = j + 1;
			j++;
		}
		i++;
	}
}

void	em_rank(int n)
{
	int i;
	int rank_weight[n];
	int rank_height[n];
	int rank[n];

	em_sort(weight, rank_weight);
	em_sort(height, rank_height);

	i = 0;
	while (i < n)
	{
		if (rank_weight[i] == rank_height[i])
		rank[i] = rank_weight[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
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
