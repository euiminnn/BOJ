# 수정중..
sentence = input().split()
for s in sentence :
    i = 0
    while i < len(s) :
        if 'a' <= s[i] <= 'z' or '0' <= s[i] <= '9' :
            i += 1
        else :  # < 일 때
            i += 2  # a
            if s[i] == '>' :
                i += 1
                rev
            else :
                i += 1
    print(s)
