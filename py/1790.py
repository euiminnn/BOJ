n, k = map(int, input().split())
answer = -1
if 1 <= k <= 9 :
    answer = k
#N = 10 ~ 19
if 10 <= k <= 19 :
    if k % 2 == 0 :
        answer = k // 10
    else :
        #11 0, 13 1, 15 2, 17 3, 19 4
        answer = (((k - 10) - 1) / 2) % 10
if 20 <= k <= 29 :
    if k % 2 == 0 :
        answer = k // 10 - 1
    else :
        #21 5, 23 6, 25 7, 27 8, 29 9
        print("k", k)
        answer = (((k - 10) - 1) / 2) % 10
#N = 20 ~ 29
if 30 <= k <= 39 :
    if k % 2 == 0 :
        answer = k // 10 - 1
    else :
        #31 0, 33 1, 35 2, 37 3, 39 4
        answer = (((k - 10) - 1) / 2) % 10
if 40 <= k <= 49 :
    if k % 2 == 0 :
        answer = k // 10 - 2
    else :
        #41 5, 43 6, 45 7, 47 8, 49 9
        answer = (((k - 10) - 1) / 2) % 10

print("answer=", int(answer))
