#include <iostream>
using namespace std;

void soma();
void soma(int n1, int n2);

int main() {
    //SOBRECARGA DE FUNÇÕES

    soma();
    soma(1, 12);

    cout << "Press ENTER to exit...";
    cin.get();
    cin.get();
    return 0;
}

void soma() {
    int n1, n2, res;
    n1 = 20;
    n2 = 13;
    res = n1 + n2;
    cout << "\nA soma entre " << n1 << " e " << n2 << " é: " << res << "\n";
}

void soma(int n1, int n2) {
    int res;
    res = n1 + n2;
    cout << "\nA soma entre " << n1 << " e " << n2 << " é: " << res << "\n";
}

