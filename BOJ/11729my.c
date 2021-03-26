/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729my.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 02:31:38 by echung            #+#    #+#             */
/*   Updated: 2021/03/26 02:44:16 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void hanoi(int n, int from, int temp, int to)
{
	if (n == 1)
		printf("%d %d\n", from, to);
	else
	{
		hanoi(n-1, from, to, temp);	//n-1개를 왼쪽-> 중간
		hanoi(1, from, temp, to);
		hanoi(n-1, temp, from, to);	//n-1개를 중간-> 오른쪽
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	hanoi(n, 1, 2, 3);
	return (0);
}
