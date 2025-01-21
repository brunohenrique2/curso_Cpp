#include <iostream>
using namespace std;

int bala_dano = 20;

int main() {

    int vida_max, vida_corrente, hit;
    vida_max = 100;
    vida_corrente = 100;
    hit = vida_corrente - bala_dano;

    cout << "HP[" << hit << '/' << vida_max;
    system("pause");

    return 0;
}