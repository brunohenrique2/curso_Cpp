#include <iostream>

using namespace std;

int main() {
    string db_user_pass, form_user_pass;
    bool logged_check = false;
    db_user_pass = "ATFoGhr054";

    cout << "Digite a senha: ";
    cin >> form_user_pass;
    cout << "Senha digitada: " << form_user_pass << endl;

    if(form_user_pass == "0123456789") {
        form_user_pass = db_user_pass; //finge que isso é a camada de criptografia kkk
        if(db_user_pass == form_user_pass) {
            logged_check = true;
            cout << "Usuario logado com sucesso!\nBem-vindo ao sistema!";
        } 
        else {
            cout << "E-mail ou senha incorretos, tente novamente!";
        }
    }
    else {
        cout << "E-mail ou senha incorretos, tente novamente!";
    }

    system("pause");
    return 0;
}