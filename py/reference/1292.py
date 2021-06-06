# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1292.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/06 13:54:34 by echung            #+#    #+#              #
#    Updated: 2021/06/06 20:23:12 by echung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

start, end = map(int, input().split())
n = 1
while n < 50 :
    if (n - 1) * n // 2 < start <= n * (n + 1) // 2 :
        print("n for start is", n)
        break
    n += 1
s = n
ss = n
while n < 50 :
    if (n - 1) * n // 2 < end <= n * (n + 1) // 2 :
        print("n for end is", n)
        break
    n += 1
e = n

answer = 0
mid = 0

if e - s > 1 :
    es = e - s - 1
    while es > 0 :
        mid += (s + 1) * (s + 1)
        s += 1
        es = e - s - 1
        print("mid is", mid)
answer += mid

"""
x = 0
while x < 50 :
    x += 1
    if start + x > ss * (ss + 1) // 2 :
        answer += ss * x
    elif start - x <= (ss - 1) * s // 2 :
        answer += ss * x

#print("s is", s, "e is", e)
"""
