#include <iostream>
using namespace std;

int main() {

    string inventory[3][9], hand_inventory[1][9], item;

    for(int l=0; l < 3; l++) {
        for(int c=0; c < 9; c++) {
            inventory[l][c] = to_string(c);
        }
    }

    for(int l=0; l < 3; l++) {
        for(int c=0; c < 9; c++) {
            cout << "[" << inventory[l][c] << "] ";
        }
        cout << "\n";
    }

    for(int i=0; i < 36; i++) {
        cout << "=";
    }

    cout << "\n";

    for(int l=0; l < 1; l++) {
        for(int c=0; c < 9; c++) {
            hand_inventory[l][c] = to_string(c);
            cout << "[" << hand_inventory[l][c] << "] ";
        }
        cout << "\n";
    }

    cout << "\nPrograma finalizado.\n";
    cout << "Pressione qualquer tecla para sair...";
    cin.ignore();
    cin.get();
    return 0;
}