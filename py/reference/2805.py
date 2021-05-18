n, m = map(int, input().split())
tree = list(map(int, input().split()))
start_, end_ = 1, max(tree)

while start_ <= end_ :
    mid = (start_ + end_)

    log = 0
    for i in tree :
        if i >= mid :
            log += i - mid

    if log >= m :
        start_ = mid + 1
    else :
        end = mid - 1
print(end)
