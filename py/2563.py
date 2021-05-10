N = int(input())
arr = [[0 for _ in range(0, 101)] for _ in range(0, 101)]   # 0으로 채워진 100x100 사이즈 배열 (도화지 생성)

for _ in range(N):                      # 색종이 개수만큼 반복
    x, y = map(int, input().split())    # (x, y) 배열로 받음

    for i in range(x, x + 10) :         # 왼쪽 아래 좌표가 (x, y)인 10x10 정사각형 모두 1로 채우기
        for j in range(y, y + 10) :
            arr[i][j] = 1

count = 0
for a in arr :
    count += a.count(1)                 # 1의 개수 세기(->색종이 없으면 0, 있으면 1이 됨)
print(count)                            # 이렇게 하면 겹치는 부분 더하고 뺄 필요 없이 간편하게 계산 가능
