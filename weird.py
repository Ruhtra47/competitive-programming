n = int(input())

while n != 1:
    print(n, end=" ")
    if n % 2 == 0:
        n = int(n / 2)
    else:
        n = int(n * 3 + 1)

print(1)
