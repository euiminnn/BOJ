/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1018.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:34:47 by echung            #+#    #+#             */
/*   Updated: 2021/04/01 02:12:44 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char w_box[9 * 8];
char b_box[9 * 8];

int		min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	em_print_box(char *box, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		printf("%c", box[i]);
		i++;
	}
}
/*
void	em_compare(char *box, int len)
{
	int i;
	int w_count = 0;
	int b_count = 0;
	int n_count = 0;
	int ret = 0;
	
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] + w_box[i] != 96)
			w_count++;
		else if (i % 2 != 0 && box[i] + w_box[i] != 98)
			w_count++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			n_count++;
		else if (i % 2 == 0 && box[i] + b_box[i] != 98)
		{
			b_count++;
		//	printf("\nb_count_98 when i = %d\n", i);
		}
		else if (i % 2 != 0 && box[i] + b_box[i] != 96)
		{
			b_count++;
		//	printf("\nb_count_96 when i = %d\n", i);
		}
		i++;
	}
	ret = min(w_count, b_count);
	printf("\nmin count: %d", ret);
}
*/
/*
void	em_copy_box(int len)
{
	int i;
	
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			w_box[i] = '\n';
		else if (i % 2 == 0)
			w_box[i] = '0';
		else
			w_box[i] = '1';
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 9 == 0)
			b_box[i] = '\n';
		else if (i % 2 == 0)
			b_box[i] = '1';
		else
			b_box[i] = '0';
		i++;
	}
	printf("w_box: \n");
	em_print_box(w_box, len);
	printf("\n");
	printf("b_box: \n");
	em_print_box(b_box, len);
	printf("\n");

}
*/

void	em_cut(char *box, int m, int n, int len)
{
	char cutted_box[9 * 8];
	int i;
	int j;
	int k;
	i = 0;
	j = 0;
	k = 0;
	while (n > 0)
	{
		while (i < m*j + 9)
		{
			cutted_box[i + k] = box[i + k];
			i++;
		}
		cutted_box[i++] = '\n';
		n--;
		j++;
		k = m*j;
	}

	while (i < 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}
	i = m;
	while (i < m + 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}
	i = m + m;
	while (i < m + m + 8 + 1)
	{
		cutted_box[i] = box[i];
		i++;
	}

	em_print_box(cutted_box, len);
//	em_compare(cutted_box, len);
}

void	em_char_to_num(char *org_box, int len)
{
	int i;
	i = 0;
	while (i < len)
	{
		if (org_box[i] == 'W')
			org_box[i] = '0';
		else if (org_box[i] == 'B')
			org_box[i] = '1';
		else
			org_box[i] = '\n';
		i++;
	}
//	printf("org_box: \n");
//	em_print_box(org_box, len);
}

int		main(void)
{
	char box[2500];
	int m;
	int n;
	int i;
	int len;

	scanf("%d %d", &m, &n);
	i = 0;
	len = (m + 1) * n;
	while (i < len)
	{
		scanf("%c", &box[i]);
		i++;
	}
//	em_copy_box(len);
	em_char_to_num(box, len);
	em_cut(box, m, n, len);
//? if input error ?
//	em_print_box(box, len);
	return (0);
}
