N, M = map(int, raw_input().split())
# input error: python unexpeected EOF while parsing
# how i solved: use 'raw_input'(which accepts string as an input) instead of 'input'
use raw_input instead of 
board = [raw_input() for _ in range(N)]

def em_count(x, y, element) :
    count = 0
    for i in range(8) :
        for j in range(8) :
            if i % 2 == 0 :
                if j % 2 == 0 :
                    if board[i+x][j+y] == element[0] :
                        continue
                    count = count + 1
                else :
                    if board[i+x][j+y] == element[1] :
                        continue
                    count = count + 1
            else :
                if j % 2 == 0 :
                    if board[i+x][j+y] == element[1] :
                        continue
                    count = count + 1
                else :
                    if board[i+x][j+y] == element[0] :
                        continue
                    count = count + 1
    return count

result = []
for i in range(N-7) :
    for j in range(M-7) :
        result.append(em_count(i, j, ['W', 'B']))
        result.append(em_count(i, j, ['B', 'W']))

print(min(result))
