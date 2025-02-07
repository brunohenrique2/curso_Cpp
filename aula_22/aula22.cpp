#include <iostream>
using namespace std;

// Prototipar as funções antes do main()
void welcome();
int soma(int num, int num2);

int main() {
    int num, num2;
    welcome();
    cout << "\nDigite o primeiro numero: ";
    cin >> num;
    cout << "\nDigite o segundo numero: ";
    cin >> num2;
    cout << soma(num, num2);
    cout << "\nPressione qualquer tecla para encerrar...\n";
    cin.ignore();
    cin.get();
    return 0;
}

void welcome() {
    cout << "\nBem-Vindo ao programa de somar valores!\n";
    cout << "\nAbaixo voce deve escrever os valores que deseja somar!\n";
}

int soma(int num, int num2) {
    cout << "\nResutado: ";
    return num + num2;
}