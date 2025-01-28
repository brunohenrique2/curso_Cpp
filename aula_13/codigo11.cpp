#include <iostream>
using namespace std;

int main() {

    int opt;

    cout << "Escolha uma fruta:\n";
    cout << "[0] Banana, [1] Uva, [2] Abacate\n";
    cin >> opt;

    switch(opt) {
        case 0:
            cout << "Escolheu banana.\n";
            break;
        case 1:
            cout << "Eescolheu uva.\n";
            break;
        case 2:
            cout << "Escolheu abacate.\n";
            break;
        default:
            cout << "Opção invalida\n";
    }

    cout << "Programa finalizado!\n";
    system("pause");

    return 0;
}