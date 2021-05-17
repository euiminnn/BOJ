a, b = map(int, input().split())
n, m = map(int, input().split())
start_ = []
end_ = []

for _ in range(0, n) :
    s, e = map(int, input().split())
    if s == e :
        continue
    start_.append(s)
    start_.append(e)
    end_.append(e)
    end_.append(s)

cnt = 0
count_ = []
i = 0
while i < 2 * n :
    if a == start_[i] :
        a = end_[i]
        cnt += 1
        i += 1
    if a == b :
        count_.append(cnt)
        break
    else :
        i += 1
#print(start_)
#print(end_)
print(a, b)

if a != b :
    print(-1)
if len(count_) >= 1 :
    print("min", min(count_))
