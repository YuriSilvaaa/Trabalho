#include <iostream>

// Função para trocar os valores das variáveis usando ponteiros
void trocarValores(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Valores originais:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    // Passando os endereços de memória das variáveis para a função
    trocarValores(&a, &b);

    std::cout << "Valores após a troca:\n";
    std::cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}



