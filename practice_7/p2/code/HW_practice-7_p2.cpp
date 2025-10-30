#include <stdio.h>
#include <iostream>
#include <set>
// "Set with the Largest Number of Elements Printer" is S.L.N.E.P.
void SLNRP(std::set<int> setA, std::set<int> setB)
{
    unsigned long len_setA = setA.size();
    unsigned long len_setB = setB.size();
    if (len_setA > len_setB)
    {
        std::cout << "Множество A:\n";
        for (int element : setA) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    else if (len_setA < len_setB)
    {
        std::cout << "Множество B:\n";
        for (int element : setB) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "\nКол-во элементов в обоих множествах одинаково.\nВывожу оба множества:\n";
        std::cout << "Множество A:\n";
        for (int element : setA) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        
        std::cout << "\nМножество B:\n";
        for (int element : setA) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::set<int> sA{3 ,6, 7, 8, 9};
    std::set<int> sB{2, 3, 6, 7, 4, 5};
    SLNRP(sA, sB);
    return 0;
}
