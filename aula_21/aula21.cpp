#include <iostream>
using namespace std;

int main(int argc, char *argv[]) { //argc conta a quantidade de parametros, enquanto argv salva os valores em um array

    if(argc > 1) {
        if(argv[1] == "minecraft") {
            cout << "Bem-vindo a minecraft, eae meu amigo, na viajem desse game vai ficar surpreendido...\n";
        }
        else if(argv[1] == "mario") {
            cout << "Aquele que te come atras do armario!\n";
        }
        else {
            cout << "Dev teve muita preguiça de programar, mas fica com uma pizza...\n";
        }

        cout << "Nenhum parametro passado...\n";
    }

        cout << "\nPressione ENTER para encerra...";
        cin.get();
        return 0;
}