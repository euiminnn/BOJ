/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7568.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:38:28 by echung            #+#    #+#             */
/*   Updated: 2021/03/29 20:16:13 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[50][2];

int*	em_sort(int n)
{
	int temp;
	int i;
	int j;
	int rank;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (j < n - i)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i < n)
	{
		rank = arr[i];
		i++;
	}
	return (rank);
}

void	em_rank(int n)
{
	int i;
	int rank_weight[n];
	int rank_height[n];
	int rank[n];
	
	rank_weight = em_sort(arr[n][0]);
	rank_height = em_sort(arr[n][1]);
	
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
	int n;
	int i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		i++;
	}
	em_rank(n);
	return (0);
}
