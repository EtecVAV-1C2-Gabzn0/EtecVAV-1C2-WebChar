#include <iostream>
// long long pra aguentar 64 bits
long long calcularPotencia(int base, int expoente) {
    if (expoente < 0) {
        std::cout << "Expoente negativo nao suportado nessa funcao." << std::endl;
        return 0;
    }
    long long resultado = 1;
    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    int base, expoente;
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "Digite o expoente: ";
    std::cin >> expoente;
    long long resultado = calcularPotencia(base, expoente);
    if (expoente >= 0) {
        std::cout << "\nO resultado de " << base << " elevado a " << expoente << " e: " << resultado << std::endl;
    }
    return 0;
}
