#include <iostream>

int main() {
    char caractere;
    char *ptr_caractere;

    // Apontando o ponteiro para a variável 'caractere'
    ptr_caractere = &caractere;

    // Solicitando ao usuário que entre com um caractere
    std::cout << "Digite um caractere: ";
    std::cin >> *ptr_caractere;

    // Modificando o valor da variável 'caractere' através do ponteiro
    *ptr_caractere = toupper(*ptr_caractere); // Convertendo para maiúscula

    // Exibindo o caractere modificado
    std::cout << "Caractere em maiuscula: " << *ptr_caractere << std::endl;

    return 0;
}
