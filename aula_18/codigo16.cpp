#include <iostream>
using namespace std;

int main() {

    string inventory[9], item;

    for(int i=0; i < sizeof(inventory)/sizeof(inventory[0]); i++) {
        cout << "Adicione um item ao inventario: ";
        cin >> item;
        inventory[i] = item;
        cout << "\n";
    }

    for(int j=0; j < sizeof(inventory)/sizeof(inventory[0]); j++) {
        cout << "[" << inventory[j] << "] ";
    }
    
    cout << "\nPrograma finalizado.\n";
    cin.ignore();
    cin.get();
    return 0;
}