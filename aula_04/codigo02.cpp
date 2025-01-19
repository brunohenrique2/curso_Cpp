#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    //Variaveis
    char money_symbol = '$';
    string nome = "Bruno Henrique";
    int idade = 20;
    double dano = 17.569;
    float altura = 1.68;
    bool vivo = true;

    cout << "[======Bem-vindo ao RPG C++======]\n";
    cout << "Vamos criar seu personagem!\n";
    cout << "Digite seu nome: \n";
    getline(cin, nome);
    cout << "Digite sua idade: \n";
    cin >> idade;
    cout << "Digite sua altura: \n";
    cin >> altura;
    cout << vivo << endl;
    cout << "Parabens por criar seu personagem, você está vivo agora!\n";
    cout << "[======Ficha de Personagem======]\n";
    cout << "Nome: " << nome << '\n';
    cout << "Idade: " << idade << '\n';
    cout << "Altura: " << altura << '\n';
    cout << "Dano: " << dano << '\n';
    cout << "Status: " << vivo << '\n';

    system("pause");
    return 0;
}