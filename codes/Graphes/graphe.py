# Multiples de 3 et 5
mult_3_5 = []
for i in range(1000):
    if (i%3==0) or (i%5==0):
         mult_3_5.append(i)
print(mult_3_5)


somme_3_5 = 0
for i in range(10):
    if (i%3==0) or (i%5==0):
         somme_3_5 += i
print(somme_3_5)

# somme chiffres
chf = str(2**50)
s=0
for c in chf:
    s += int(c)
print(s)


def matmult(A,B,n):
    C = [] # la matrice est vide
    for i in range(n):
        C.append([]) # on ajoute une ligne vide
        L = [] # la ligne est initialisée
        for j in range(n):
            C[i].append(0)
    for i in range(n):
        for j in range(n):
            m = 0
            for k in range(n):
                m += A[i][k]*B[k][j]
            C[i][j] = m
    return C


