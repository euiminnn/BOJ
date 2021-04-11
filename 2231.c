/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2231.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:50:54 by echung            #+#    #+#             */
/*   Updated: 2021/04/11 17:19:39 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		em_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	em_split(int num)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int result = 1999999;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					for (m = 0; m <= 9; m++)
					{
						for (n = 0; n <= 9; n++)
						{
							if (num == 100001 * i + 10001 * j + 1001 * k + 101 * l + 11 * m + 2 * n)
								result = em_min(result, 100000 * i + 10000 * j + 1000 * k + 100 * l + 10 * m + 1 * n);
						}
					}
				}
			}
		}
	}
	if (result == 1999999)
		result = 0;
	printf("%d", result);
}

int		main(void)
{
	int num;
	scanf("%d", &num);
	em_split(num);
	return (0);
}
