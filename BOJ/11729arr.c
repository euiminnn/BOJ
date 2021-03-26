/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729..c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 00:44:33 by echung            #+#    #+#             */
/*   Updated: 2021/03/26 02:30:27 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char arr[200000][2];

void print_hanoi(char **arr)
{
	int ar;
	
	ar = 0;

	printf("%d %d\n", arr[ar][0], arr[ar][1]);
}

void hanoi(int n, int from, int els, int to)
{
	int i;

	if (n != 1)
	{
		hanoi(n-1, from, to, els);
		hanoi(1, from, els, to);
		hanoi(n-1, els, from, to);
	}
	else
	{
		i = 
		arr[i][0] = from;
		arr[i][1] = to;
		return ;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	hanoi(n, 1, 2, 3);
	print_hanoi(arr);
}

