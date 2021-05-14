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
    str_ = str_[1:-1].split(',')
    str_ = list(map(int, str_))
    arr.append(str_)
    case_ -= 1

#for i in range(0, case) :
#    for l in range(0, leng[i]) :
#        if cmd[i][l] == 'R' :
#            arr[0].reverse()

print("cmd=", cmd)
print("leng=", leng)
print("arr=", arr)
