case = int(input())
for _ in range(case) :
    n = int(input())
    student = []
    for _ in range(n) :
        student.append(list(map(int, input().split())))
    student.sort(key=lambda x : x[0])
    _min = 100001
    result = 0
    for s in student :
        if (_min > s[1]) :
            result += 1
        _min = min(s[1], _min)
    print(result)
