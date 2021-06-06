n = int(input())

graph = []
for i in range(n) :
    graph.append(list(map(int, input())))

answer = []
def dfs(x, y) :
    global apt
    if x <= -1 or x >= n or y <= -1 or y >= n :
        return False
    if graph[x][y] == 1 :
        graph[x][y] = 0
        apt += 1
        dfs(x-1, y)
        dfs(x+1, y)
        dfs(x, y+1)
        dfs(x, y-1)
        return apt
    else :
        return False

danji = 0
apt = 0
for i in range(n) :
    for j in range(n) :
        if dfs(i, j) >= 1 :
            answer.append(apt)
            danji += 1
            apt = 0

answer = sorted(answer)
print(danji)
a = len(answer)
b = 0
while b < a :
    print(answer[b])
    b += 1
