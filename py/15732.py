box, case, acorn = map(int, input().split())

num_from = [0] * case
num_to = [0] * case
every = [0] * case
i = 0

while i < case :
    num_from[i], num_to[i], every[i] = map(int, input().split())
    i += 1


nums = []
i = 0
while i < case :
    num = num_from[i] - every[i]
    j = 0
    while j < (num_to[i] - num_from[i]) // every[i] + 1 :
        num = num + every[i]
        nums.append(num)
        j += 1
    i += 1

nums = sorted(nums)

print(nums[acorn-1])
