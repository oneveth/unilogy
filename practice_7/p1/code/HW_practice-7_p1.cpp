#include <iostream>
// "Print such an Array first which Elements are Greater Than t" is P.A.E.G.T.t.
void PAEGTt(int* arrA, int* arrB, int t)
{
    int cA = 0;
    int cB = 0;
    for (int i = 0; i !=5; i++)
    {
        if (arrA[i] > t)
        {
            cA+=1;
        }
        if (arrB[i] > t)
        {
            cB+=1;
        }
    }
    if (cB > cA)
    {
        std::cout << "\tМассив B:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrB[i] << ' ';
        }
        std::cout << std::endl;
        
        std::cout << "\tМассив A:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrA[i] << ' ';
        }
        std::cout << std::endl;
    }
    else if (cA > cB)
    {
        std::cout << "\tМассив A:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrA[i] << ' ';
        }
        std::cout << std::endl;;
        
        std::cout << "\tМассив B:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrB[i] << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Кол-во таковых элементов в обоих массивах одинаково.\nВывожу оба массива:\n";
        std::cout << "\tМассив A:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrA[i] << ' ';
        }
        std::cout << std::endl;;
        
        std::cout << "\tМассив B:\n";
        for (int i=0; i!=5; i++)
        {
            std::cout << arrB[i] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int aA[5] = {5, 6, 2, 9, 3};
    int aB[5] = {8, 5, 1, 0, 4};
    PAEGTt(aA, aB, 8);
    return 0;
}
