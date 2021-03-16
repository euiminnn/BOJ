/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5532.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:33:12 by echung            #+#    #+#             */
/*   Updated: 2021/03/16 23:43:13 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int L;
int A;
int B;
int C;
int D;

int language;
int math;

int max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

int main (void)
{
	scanf("%d\n%d\n%d\n%d\n%d", &L, &A, &B, &C, &D);
	language = A / C;
	if (A % C)
		language++;
	math = B / D;
	if (B % D)
		math++;
	L = L - max(language, math);
	printf("%d", L);
	return (0);
}



