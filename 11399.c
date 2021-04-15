/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11399.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:32:07 by echung            #+#    #+#             */
/*   Updated: 2021/04/15 23:34:44 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	em_print(int *arr)
{
	printf("Here! %d", arr[0]);
}

int		main(void)
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	em_print(arr);
	return (0);
}
