/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 00:44:33 by echung            #+#    #+#             */
/*   Updated: 2021/03/26 01:37:40 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int count = 0;

void hanoi_count(int n, int from, int els, int to)
{
	if (n != 1)
	{
		hanoi_count(n-1, from, to, els);
		hanoi_count(1, from, els, to);
		hanoi_count(n-1, els, from, to);
	}
	else
	{
		count++;
		return ;
	}
}

void hanoi(int n, int from, int els, int to)
{
	if (n != 1)
	{
		hanoi(n-1, from, to, els);
		hanoi(1, from, els, to);
		hanoi(n-1, els, from, to);
	}
	else
	{
		printf("%d %d\n", from, to);
		return ;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	hanoi_count(n, 1, 2, 3);
	printf("count: %d\n", count);
	hanoi(n, 1, 2, 3);
}

