case = int(input())
cmd = []
leng = []
arr = []
case_ = case
while case_ > 0 :
    cmd.append(input())
    leng.append(int(input()))
    #arr = list(map(int, input()[1:-1].split(", ")))
    str_ = input()
    str_ = str_[1:-1]
    if len(str_) == 0 :
        arr.append([])
    else :
        str_ = str_.split(',')
        str_ = list(map(int, str_))
        arr.append(str_)
    case_ -= 1

#print("cmd=", cmd)
#print("leng=", leng)
#print("arr=", arr)
for i in range(0, case) :
    for l in range(0, len(cmd[i])):
        if cmd[i][l] == 'R' :
            arr[i].reverse()
        elif cmd[i][l] == 'D' :
            if len(arr[i]) == 0 :
                print("error")
                break
            else :
                arr[i].pop(0)
    else:
        print(arr[i])

