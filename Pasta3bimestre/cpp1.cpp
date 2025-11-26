#include <iostream>
bool Impar(int numero) {
    return (numero % 2 != 0);
}
int main() {
    int numeroLido;
    int somaImpares = 0;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numeroLido;
    for (int i = 1; i <= numeroLido; ++i) {
        if (Impar(i)) {
            somaImpares += i;
        }
    }
    std::cout << "A soma dos numeros impares ate " << numeroLido << " e: " << somaImpares << std::endl;
    return 0;
}
