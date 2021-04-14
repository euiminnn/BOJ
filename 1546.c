/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1546.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:43:54 by echung            #+#    #+#             */
/*   Updated: 2021/04/14 23:38:17 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	em_avg(int* arr, int n, float big)
{
	int i;
	float sum;
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + arr[i];
		i++;
	}
	printf("%f", sum * 100 / big / n);
}

void	em_big(int* arr, int n)
{
	int big;
	int i;

	big = arr[0];

	while (i < n)
	{
		if (arr[i] > big)
			big = arr[i];
		i++;
	}
	em_avg(arr, n, big);
}

int		main(void)
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int tmp;
	tmp = 0;
	while (tmp < n)
	{
		scanf("%d", &arr[tmp]);
		tmp++;
	}
	em_big(arr, n);
	return (0);
}
