#include <iostream>
using namespace std;

int main() {

    string clima = "chuva";
    bool bola = true;

    if(clima == "sol" and bola == true) {
        printf("Eu vou jogar bola no parque.");
    }
    else if(clima == "sol" && bola == false) {
        printf("Eu vou ao shopping");
    }
    else if(clima == "chuva" and bola == true) {
        printf("Jogar bola dentro de casa.");
    }
    else {
        printf("Vou ficar em casa.");
    }

    system("pause");

    return 0;
}