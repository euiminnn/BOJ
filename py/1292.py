# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1292.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/06 13:54:34 by echung            #+#    #+#              #
#    Updated: 2021/06/06 20:30:26 by echung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

start, end = map(int, input().split())
seq = []
n = 1
while n < 50 :
    seq += [n] * n
    n += 1
answer = seq[start-1 : end]
answer = sum(answer)
print(answer)
#print(seq)
