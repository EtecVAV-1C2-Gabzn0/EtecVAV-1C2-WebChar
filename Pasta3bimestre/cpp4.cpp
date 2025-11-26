#include <iostream>
#include <string>

int soma (int a, int b) {
    return a+b;
}
int multip (int a, int b) {
    return a*b;
}
float divisao (float a, float b) {
    return a/b;
}

int main( int argc, char *argv) {

    int num1;
    int num2;


    std::cout << "Digite um numero: ";
    std::cin >> num1;
    std::cout << "Digite um numero: ";
    std::cin >> num2;

    float f1 = num1;
    float f2 = num2;

    if (num1 > 0 && num2 > 0) {

        std::cout<<num1<<" + "<<num2<<" = "<< soma(num1,num2)<<"\n";
        std::cout<<num1<<" * "<<num2<<" = "<< multip(num1,num2)<<"\n";
        std::cout<<f1<<" / "<<f2<<" = "<< divisao(num1,num2)<<"\n";

    }

    system("pause");


    return 0;
}

