#include <iostream>

int main() {
    const int tamanho = 5;
    int numeros[tamanho] = {1, 2, 3, 4, 5};
    int *ptr_numeros = numeros; // Apontando o ponteiro para o início do array

    std::cout << "Valores do array de inteiros:\n";
    
    // Percorrendo o array e imprimindo os valores usando o ponteiro
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Elemento " << i << ": " << *ptr_numeros << std::endl;
        ptr_numeros++; // Movendo o ponteiro para o próximo elemento do array
    }

    return 0;
}
