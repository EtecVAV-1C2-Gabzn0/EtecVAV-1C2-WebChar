#include <iostream>

float calcularPesoIdealMasculino(float altura) {
    return (72.7 * altura) - 58;
}

float calcularPesoIdealFeminino(float altura) {
    return (62.1 * altura) - 44.7;
}

int main() {
    char sexo;
    float altura;
    float pesoIdeal;

    std::cout << "Digite o seu sexo (M para masculino, F para feminino): ";
    std::cin >> sexo;

    std::cout << "Digite sua altura em metros (ex: 1.75): ";
    std::cin >> altura;

    sexo = std::toupper(sexo);

    if (sexo == 'M') {
        pesoIdeal = calcularPesoIdealMasculino(altura);
        std::cout << "\nSeu peso ideal e: " << pesoIdeal << " kg." << std::endl;
    } else if (sexo == 'F') {
        pesoIdeal = calcularPesoIdealFeminino(altura);
        std::cout << "\nSeu peso ideal e: " << pesoIdeal << " kg." << std::endl;
    } else {
        std::cout << "\nSexo invalido. Por favor, digite 'M' ou 'F'." << std::endl;
    }

    return 0;
}