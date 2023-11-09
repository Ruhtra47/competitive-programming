op = input()
n1, n2 = map(float, input().split())

if op == "M":
    print("%.2f" % (n1 * n2))
else:
    print("%.2f" % (n1 / n2))
