numbers = []
big = 0
bigi = 0

for _ in range(9) :
    numbers.append(int(input()))

for i in range(len(numbers)) :
    if big < numbers[i] :
        big = numbers[i]
        bigi = i

print(big)
print(bigi + 1)
