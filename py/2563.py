N = int(input())
arr = [[0 for _ in range(0, 101)] for _ in range(0, 101)]

for _ in range(N):
    x, y = map(int, input().split())

    for i in range(x, x + 10) :
        for j in range(y, y + 10) :
            arr[i][j] = 1

count = 0
for a in arr :
    count += a.count(1)
print(count)
