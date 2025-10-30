# "Set with the Largest Number of Elements Printer" is S.L.N.E.P.
def SLNEP(setA, setB):
    len_setA = len(setA)
    len_setB = len(setB)
    if len_setA > len_setB:
        return print(f'\n\tМножество A:\n  {setA}')
    elif len_setA < len_setB:
        return print(f'\n\tМножество B:\n  {setB}')
    else:
        return print(f'\nКол-во элементов в обоих множествах одинаково.'
                  f'\nВывожу оба множества:'
                  f'\n\tмножество A:\n  {setA} \n\tМножество B:\n  {setB}')

A = {5,4,7,6,8,9}
B = {3,5,6,7,8}
SLNEP(A, B)


