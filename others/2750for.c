/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2750for.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:16:08 by echung            #+#    #+#             */
/*   Updated: 2021/03/26 22:03:19 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[1000];

void	em_sort(int n)
{
	int temp;
	int i;
	int j;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", arr[i]);
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
		scanf("%d", &arr[i]);
		i++;
	}
	em_sort(n);
	return (0);
}
