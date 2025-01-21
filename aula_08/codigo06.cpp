#include <iostream>
using namespace std;

int main() {

    int move;

    cout << "Digite a velocidade do movimento: ";
    cin >> move;
    cout << "\n Movimento: " << move;
    move =- move;
    cout << "\n Movimento invertido: " << move << endl;
    
    system("pause");
    return 0;
}