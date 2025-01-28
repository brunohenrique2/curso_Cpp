#include <iostream>
using namespace std;

int main() {

    int nota1, nota2, nota3, media;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3)/3;

    res = media >= 60? "Aprovado" : "Reprovado";

    cout << "Aluno foi " << res << "!" << " Sua media é: " << media << endl;

    system("pause");
    return 0;
}