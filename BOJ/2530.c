/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2530.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:57:07 by echung            #+#    #+#             */
/*   Updated: 2021/03/12 22:27:15 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int hrs;
	int min;
	int sec;
	int time;

	int time_hrs;
	int time_min;
	int time_sec;

	int ret_hrs;
	int ret_min;
	int ret_sec;

	scanf("%d %d %d\n%d", &hrs, &min, &sec, &time);
	time_hrs = time / 3600;
	time_min = (time % 3600) / 60;
	time_sec = (time % 3600) % 60;
/*
	printf("time_hrs: %d\n", time_hrs);
	printf("time_min: %d\n", time_min);
	printf("time_sec: %d\n", time_sec);
*/
	ret_hrs = hrs + time_hrs;
	ret_min = min + time_min;
	ret_sec = sec + time_sec;
	
	if (ret_sec >= 60)
	{
		ret_min++;
		ret_sec = ret_sec - 60;
	}
	if (ret_min >= 60)
	{
		ret_hrs++;
		ret_min = ret_min - 60;
	}
	while (ret_hrs >= 24)
	{
		ret_hrs = ret_hrs - 24;
	}
	printf("%d %d %d", ret_hrs, ret_min, ret_sec);
	return (0);
}
