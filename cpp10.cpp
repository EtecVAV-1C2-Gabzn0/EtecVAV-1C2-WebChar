#include <iostream>
#include <string>
#include <cctype> // tolower()

// Função para verificar se um caractere é uma vogal
bool Vogal(char c) {
    c = std::tolower(c); // Converte para minúscula para simplificar a verificação
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Função para verificar se um caractere é uma consoante
bool Consoante(char c) {
    c = std::tolower(c); // Converte para minúscula

    // Um caractere é uma consoante se for uma letra do alfabeto e não for uma vogal
    if (std::isalpha(c) && !Vogal(c)) {
        return true;
    }
    return false;
}

int main() {
    std::string nomeCompleto;
    int contadorVogais = 0;
    int contadorConsoantes = 0;

    std::cout << "Digite um nome completo: ";
    std::getline(std::cin, nomeCompleto); // Lê a linha inteira, incluindo espaços

    for (char c : nomeCompleto) {
        if (Vogal(c)) {
            contadorVogais++;
        } else if (Consoante(c)) {
            contadorConsoantes++;
        }
    }

    std::cout << "\nNome '" << nomeCompleto << "':" << std::endl;
    std::cout << "Quantidade de vogais: " << contadorVogais << std::endl;
    std::cout << "Quantidade de consoantes: " << contadorConsoantes << std::endl;

    return 0;
}