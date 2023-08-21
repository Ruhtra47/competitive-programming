from math import sqrt

n = int(input())
l = [float(i) for i in input().split()]

for x in l:
    print("%.4f" % sqrt(x))
