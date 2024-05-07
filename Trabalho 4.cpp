#include <iostream>

// Função para contar o número de caracteres em uma string usando ponteiros
int contarCaracteres(const char *str) {
    int contador = 0;

    // Percorrendo a string até encontrar o caractere nulo '\0', que indica o final da string
    while (*str != '\0') {
        contador++; // Incrementando o contador
        str++; // Movendo o ponteiro para o próximo caractere
    }

    return contador;
}

int main() {
    const char *String = "teste de numero";

    // Chamando a função contarCaracteres() e exibindo o resultado
    std::cout << "Número de caracteres na string: " << contarCaracteres(minhaString) << std::endl;

    return 0;
}
