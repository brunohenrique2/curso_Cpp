#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0)); // Inicializa a semente aleatória

    int hp = 5, i = 0, acertos = 0, tamanho, aleatorio;

    string palavras[] = {"banana","roblox", "minecraft", "panda", "loja", "fruta", "batata"}, palavra;

    //Calcula a quantidade de palavras
    tamanho = sizeof(palavras)/sizeof(palavras[0]);

    //O modulo garante que o rand() não gere um numero maior do que indice maximo do array
    aleatorio = rand() % tamanho;
    palavra = palavras[aleatorio];

    //Seta o tamanho da palavra chave com o tamamanho da palavra aleatoria
    char palavra_chave[palavra.length()], user_res;
    bool game_status = true;

    //Adiciona cada caractere da palavra dentro da palavra chave
    for(int i=0; i < palavra.length(); i++) {
        palavra_chave[i] = palavra[i];
    }

    cout << "JOGO DA FORCA" << endl;
    cout << "DICA: " << palavra.length() << " letras" << endl;
    
    while(hp > 0 && acertos < palavra.length()) { // Continua até acabar o HP ou acertar tudo.
        cout << "HP [" << hp << "]\n"; //Exibe as vidas restantes

        //Exibe as letras descobertas até o momento
        for(int l=0; l < acertos; l++) {
            cout << "[" << palavra_chave[l] << "] ";
        }

        cout << "Digite uma letra: ";
        cin >> user_res;
        cout << "\n";

        //Se o usuario acertar a palavra, conta +1 em acertos, senão perde 1 hp
        if(user_res == palavra_chave[acertos]) {
            acertos++;
            cin.ignore();
            cout << "correto!\n";
        }
        else {
            hp--;
            cout << "Errado, menos 1 vida!\n";
        }
    }

    if(acertos == palavra.length()) {
        cout << "Parabens, voce venceu o jogo!\n";
    }
    else {
        cout << "Voce perdeu! A palavra era: " << palavra << endl;
    }

    cout << "Jogo finalizado!\n";
    cout << "Pressione ENTER para sair...";
    cin.ignore();
    cin.get();
    return 0;
}

/*
Algoritmo pro jogo da forca:
O usuario digita uma letra
A letra é comparada com a posição atual do loop
Caso a letra seja igual, o loop avança para a proxima letra.
Caso contrario o loop repete a posição atual e remove uma vida do jogar
*/