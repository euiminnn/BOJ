/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 00:44:33 by echung            #+#    #+#             */
/*   Updated: 2021/03/26 21:00:09 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char arr[10000000][2];
int count = 0;

void print_hanoi(void)
{
	int ar;
	
	ar = 0;
	printf("%d\n", count);
	while (ar < count)
	{
		printf("%d %d\n", arr[ar][0], arr[ar][1]);
		ar++;
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
		arr[count][0] = from;
		arr[count][1] = to;
		count++;
		return ;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	hanoi(n, 1, 2, 3);
	print_hanoi();
}

