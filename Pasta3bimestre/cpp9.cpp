#include <iostream>
#include <string>
#include <cctype> // tolower()


std::string substituirVogais(const std::string& palavra) {
    std::string resultado = palavra; // Cria copia da string para modificar

    for (size_t i = 0; i < resultado.length(); ++i) {
        char c = std::tolower(resultado[i]); // Converte o char para minusculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            resultado[i] = '*'; // troca a vogal por '*' na copia
        }
    }

    return resultado; // Retorna a string
}

int main() {
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    std::string palavraModificada = substituirVogais(palavra);

    std::cout << "A palavra com as vogais trocadas e: " << palavraModificada << std::endl;

    return 0;
}
