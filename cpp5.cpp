#include <iostream>
#include <string>
#include <algorithm>


bool ePalindromo(const std::string& palavra) {
    std::string palavraInvertida = palavra;
    std::reverse(palavraInvertida.begin(), palavraInvertida.end());
    return palavra == palavraInvertida;
}

int main() {
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    if (ePalindromo(palavra)) {
        std::cout << "A palavra '" << palavra << "' e um palindromo." << std::endl;
    } else {
        std::cout << "A palavra '" << palavra << "' nao e um palipandromo." << std::endl;
    }

    return 0;
}