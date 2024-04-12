import math
arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
size = len(arr)
jump_size = int(math.sqrt(size))
x = 999

i = 0
while (i < size and arr[i] < x):
    print(i)
    i += jump_size

for j in range(i - jump_size, i):
    if j >= size:
        break
    print(arr[j])
    if arr[j] == x:
        print("found at", j)
        break
