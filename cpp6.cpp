#include <iostream>
#include <string>

std::string diaDaSemana(int numero) {

    std::string dias[7] ={
        "Domingo",
        "Segunda-feira",
        "Terca-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sabado"
    };

    if (numero >= 1 && numero <= 7) {
        return dias[numero-1];
    } else {
        return "Numero invalido. Por favor, digite um numero de 1 a 7.";
    }
}

int main() {
    int numeroDia;

    std::cout << "Digite um numero de 1 a 7 para ver o dia da semana: ";
    std::cin >> numeroDia;

    std::string resultado = diaDaSemana(numeroDia);
    std::cout << "O dia e: " << resultado;

    return 0;
}