# "Print such an Array first which Elements are Greater Than t" is P.A.E.G.T.t.
def PAEGTt(arrA, arrB, t):
    cA = 0
    cB = 0
    for i in range(0, 5):
        if arrA[i] > t:
            cA += 1
        if arrB[i] > t:
            cB += 1
    if cB > cA:
        return print(f'\tМассив B: {arrB}' 
                     f'\n\tМассив A: {arrA}')
    elif cA > cB:
        return print(f'\tМассив A: {arrA}'
                     f'\n\tМассив B: {arrB}')
    else:
        return print(f'\nКол-во таковых элементов в обоих массивах одинаково.'
                  f'\nВывожу оба массива:'
                  f'\n\tМассив A:\n  {arrA} \n\tМассив B:\n  {arrB}')

ent_t = int(input('Введите t: '))
A = [66,8,18,3,11]
B = [34,21,87,51,5]
PAEGTt(A,B,ent_t)
