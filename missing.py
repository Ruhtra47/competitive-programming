def main():
    n = int(input())

    l = [int(num) for num in input().split()]
    l.sort()

    if len(l) == 1:
        if l[0] == 1:
            print(2)
        else:
            print(1)
        return

    for i in range(n - 2):
        if l[i] + 1 != l[i + 1]:
            print(l[i] + 1)
            return
    print(n)


main()
