n = int(input())
mat = []
magico = True
for i in range(n):
    mat.append([int(x) for x in input().split()])

soma = sum(mat[0])
for i in range(1, n):
    if sum(mat[i]) != soma:
        magico = False
        break
for i in range(n):
    col = 0
    for j in range(n):
        col += mat[j][i]
    if soma != col:
        magico = False
        break

dig1 = 0
for i in range(n):
    dig1 += mat[i][i]
dig2 = 0
for i in range(n - 1, -1, -1):
    dig2 += mat[i][i]

if (dig1 != soma) or (dig2 != soma):
    magico = False

if magico:
    print(soma)
else:
    print(-1)
