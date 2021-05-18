from collections import deque

def bfs(a, b):
    q = deque()
    q.append(a)
    check[a] = 0
    while q:
        node = q.popleft()
        if node == b:
            return check[node]
        for n in graph[node]:
            if check[n] == -1:
                q.append(n)
                check[n] = check[node] + 1
    return -1

a, b = map(int, input().split())
n, m = map(int, input().split())
graph = [[] for _ in range(n+1)]

for _ in range(0, m):
    s, e = map(int, input().split())
    if s == e:
        continue
    graph[s].append(e)
    graph[e].append(s)
check = [-1] * (n+1)
print(bfs(a, b))
