/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chess.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:14:08 by echung            #+#    #+#             */
/*   Updated: 2021/04/02 23:14:20 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHESS_H

# define CHESS_H

# include <stdio.h>

char w_box[9 * 8];
char b_box[9 * 8];


void	em_char_to_num(char *org_box, int len);

void	em_cut(char *box, int m, int n, int len);

void	em_copy_box(int len);

void	em_compare(char *box, int len);

int		main(void);

int		min(int a, int b);

void	em_print_box(char *box, int len);

#endif
