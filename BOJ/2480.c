/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2480.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:12:57 by echung            #+#    #+#             */
/*   Updated: 2021/03/12 21:37:52 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("%d", 10000 + 1000 * a);
	else if (a == b && b != c)
		printf("%d", 1000 + 100 * a);
	else if (b == c && c != a)
		printf("%d", 1000 + 100 * b);
	else if	(a == c && c != b)
		printf("%d", 1000 + 100 * c);
	else if ((a < b < c) || (b < a < c))
		printf("%d", 100 * c);
	else if ((a < c < b) || (c < a < b))
		printf("%d", 100 * b);
	else if ((b < c < a) || (c < b < a))
		printf ("%d", 100 * a);
}
