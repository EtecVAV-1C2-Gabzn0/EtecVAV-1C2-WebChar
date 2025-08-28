#include <iostream>
#include <cmath>

// Função para calcular a área de um círculo
double calcularArea(float raio) {
    // A fórmula da área de um círculo é pi * raio^2
    return M_PI * raio * raio;
}

int main() {
    float raio, somaAreas = 0.0;

    std::cout << "Digite o raio de 5 circulos:" << std::endl;

    // Loop para ler o raio de 5 círculos, calcular a área e somar
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Raio do circulo " << i << ": ";
        std::cin >> raio;
        somaAreas += calcularArea(raio);
    }

    std::cout << "\nA soma da area de todos os circulos e: " << somaAreas << std::endl;

    return 0;
}