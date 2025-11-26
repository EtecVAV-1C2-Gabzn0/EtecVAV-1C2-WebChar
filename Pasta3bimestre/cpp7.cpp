#include <iostream>
#include <vector>
#include <string>

// Enum para representar os estados de ordenação
enum EstadoOrdenacao {
    NAO_ORDENADO,
    CRESCENTE,
    DECRESCENTE
};

// Função para verificar a ordem de um vetor de inteiros
EstadoOrdenacao verificarOrdem(const std::vector<int>& numeros) {
    bool crescente = true;
    bool decrescente = true;

    // Se o vetor tiver 1 ou menos elementos, ele é considerado ordenado.
    if (numeros.size() <= 1) {
        return CRESCENTE; // Ou DECRESCENTE, a escolha é arbitrária neste caso.
    }

    // Verifica se os números estão em ordem crescente e decrescente simultaneamente
    for (size_t i = 0; i < numeros.size() - 1; ++i) {
        if (numeros[i] > numeros[i + 1]) {
            crescente = false;
        }
        if (numeros[i] < numeros[i + 1]) {
            decrescente = false;
        }
    }

    // Retorna o resultado
    if (crescente) {
        return CRESCENTE;
    } else if (decrescente) {
        return DECRESCENTE;
    } else {
        return NAO_ORDENADO;
    }
}

// Função para converter o enum para uma string
std::string estadoToString(EstadoOrdenacao estado) {
    switch (estado) {
        case CRESCENTE:
            return "Ordem Crescente";
        case DECRESCENTE:
            return "Ordem Decrescente";
        case NAO_ORDENADO:
            return "Nao Ordenado";
        default:
            return "Estado Desconhecido";
    }
}

int main() {
    const int TAMANHO = 5;
    std::vector<int> numeros(TAMANHO);

    std::cout << "Digite " << TAMANHO << " numeros inteiros:" << std::endl;
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Chama a função e armazena o resultado
    EstadoOrdenacao ordem = verificarOrdem(numeros);

    // Exibe o resultado da verificação
    std::cout << "\nOs numeros estao em: " << estadoToString(ordem) << std::endl;

    return 0;
}
