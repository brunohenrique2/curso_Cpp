#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string aluno_nome, aluno_serie, status;
    int nota_portugues, nota_matematica, nota_ciencias, media_geral;
    char mais_alunos;

    inicio:
    system("cls");

    cout << "Digite o nome do aluno: ";
    cin >> aluno_nome;
    cout << "\nDigite a serie do Aluno: ";
    cin >> aluno_serie;
    cout <<"\nNota de Português: ";
    cin >> nota_portugues;
    cout <<"\nNota de Matematica: ";
    cin >> nota_matematica;
    cout <<"\nNota de Ciências: ";
    cin >> nota_ciencias;

    media_geral = (nota_ciencias + nota_matematica + nota_portugues)/3;

    if(media_geral >= 60) {
        status = "APROVADO";
        cout << "\nAluno aprovado por média.";

        cout << "\n[======STATUS DO ALUNO======]\n";
        cout << "Status" << status << endl;
        cout << "Nome: " << aluno_nome << endl;
        cout << "Serie: " << aluno_serie << endl;
        cout << "Português: " << nota_portugues << endl;
        cout << "Matematica: " << nota_matematica << endl;
        cout << "Ciências: " << nota_ciencias << endl;
        cout << "[===========================]";
    }
    else if(media_geral >= 40) {
        status = "RECUPERAÇÃO";
        cout << "\nAluno está em recuperação.";

        cout << "\n[======STATUS DO ALUNO======]\n";
        cout << "Status" << status << endl;
        cout << "Nome: " << aluno_nome << endl;
        cout << "Serie: " << aluno_serie << endl;
        cout << "Português: " << nota_portugues << endl;
        cout << "Matematica: " << nota_matematica << endl;
        cout << "Ciências: " << nota_ciencias << endl;
        cout << "[===========================]";
    }
    else {
        status = "REPROVADO";
        cout << "\nAluno está reprovado.";

            cout << "\n[======STATUS DO ALUNO======]\n";
            cout << "Status: " << status << endl;
            cout << "Nome: " << aluno_nome << endl;
            cout << "Serie: " << aluno_serie << endl;
            cout << "Português: " << nota_portugues << endl;
            cout << "Matematica: " << nota_matematica << endl;
            cout << "Ciências: " << nota_ciencias << endl;
            cout << "[===========================]";
    }

    cout << "\nDeseja checar mais um aluno? [s/n]: ";
    cin >> mais_alunos;

    if(mais_alunos == 's' or mais_alunos == 'S') {
        goto inicio;
    }

    system("pause");
    return 0;
}