/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:14:37 by echung            #+#    #+#             */
/*   Updated: 2021/03/25 23:42:45 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	hanoi(int n, int from, int to)
{
	int times;
	if (n == 1)
	{	
		times = 2;
		from = 1;
		to = 2;
	}
/*	else
	{
		hanoi(n-1, )
	}*/
	printf("%d\n", times);
	while (times > 1)
	{
		printf("from to\n");
//		hanoi();
		times--;
	}
	printf("from to");
}

int main(void)
{
	int n;
	int from;
	int to;
	scanf("%d", &n);
	hanoi(n, from, to);
	return (0);
}
