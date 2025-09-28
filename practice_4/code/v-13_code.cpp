#include <iostream>
#include <cmath>
// Вариант 13.

using namespace std; /* совсем не обязательно создавать общее пространство, 
но для автоматического использования в будущем (привет, канцеляризмы), 
возможно, следует ввести команду его указния в привычку (проще говоря, 
я использую using namespace, чтобы выучить команду (и сам концепт пространства имён тоже); 
ЭТО НЕ НЕЙРОСЕТЬ (!!!!1!!1!)). */
int main(){
    float x, y;
    float pi = M_PI;
    std::cout << "Введите x: \n";
    std::cin >> x;
    std::cout << "Введите y: \n";
    std::cin >> y;
    
    float r = cos((pi/4)*x);
    float s = pow(exp(y), (1/8)) * pow(5, (1/y));
    
    std::cout << "R: " << r << std::endl;
    std::cout << "S: " << s << std::endl;
    
    float c = max(r, s);
    std::cout << "С (max): " << c << std::endl;
    
    return 0;
}
