#include <iostream>

int main() {
    int a = 123;
    int b = 205;
    
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    std::cout << "Valor de a: " << a << std::endl;
    std::cout << "Valor de b: " << b << std::endl;
    
    if (*ptr1 > *ptr2) {
        std::cout << "O ponteiro ptr1 aponta para o valor mais alto: " << *ptr1 << std::endl;
    } else if (*ptr2 > *ptr1) {
        std::cout << "O ponteiro ptr2 aponta para o valor mais alto: " << *ptr2 << std::endl;
    } else {
        std::cout << "Ambos os ponteiros apontam para valores iguais: " << *ptr1 << std::endl;
    }
    
    return 0;
}
