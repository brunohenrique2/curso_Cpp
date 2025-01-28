#include <iostream>
using namespace std;

int main() {

    int menu_opt, hotel_selected, qtd_quartos, qtd_pessoas;
    double preco_hospedagem, preco_quarto, preco_pessoa;
    char next_with_choose, confirmar_pagamento;

    menu_inicial:
        cout << "Bem-Vindo ao Hospeda.com, seu site favorito de hospedagem em todo o país!\n";
        cout << "Menu Inicial:\n";
        cout << "[0] Escolher o local para hospedar.\n";
        cout << "[1] Suas hospedagens.\n";
        cout << "[2] FAQ.\n";
        cout << "[3] Sair.";
        cin >> menu_opt;

        switch(menu_opt) {
            case 0:
                hotel_selection:
                    cout << "Selecione um de nossos hoteis parceiros a baixo de acordo com a 'cheve' de cada um.\n";
                    cout << "[0]=Hotel A, [1]=Hotel B, [2]=Hotel C: ";
                    cin >> hotel_selected;

                    switch(hotel_selected) {
                        case 0:
                            cout << "\nHotel A selecionado com sucesso\n";
                            cout << "Os preços por quarto e por pessoa estão logo abaixo:";
                            cout << "[Quarto]: R$ 50.00 a diaria\n";
                            cout << "Pessoa: R$ 10.00 por pessoa\n";
                            cout << "Deseja prosseguir com a escolha? [s/n]: ";
                            cin >> next_with_choose;

                            if(next_with_choose == 'n') {
                                goto hotel_selection;
                            }

                            preco_quarto = 50.00;
                            preco_pessoa = 10.00;
                            cout << "Quantas pessoas vão se hospedar?: ";
                            cin >> qtd_pessoas;

                            preco_hospedagem = (10 * qtd_pessoas) + 50;
                            cout << "Valor da hospedagem: " << preco_hospedagem << endl;
                            cout << "Confirmar pagamento [s/n]: ";
                            cin >> confirmar_pagamento;

                            if(confirmar_pagamento == 's' || confirmar_pagamento == 'S') {
                                cout << "Pagamento realizado com sucesso, digite sair para voltar para pagina inicial";
                                goto menu_inicial;
                            }
                            break;
                    }
                break;
            case 1:
                cout << "Sua hospedagens!";
                cout << "Voltar [back]";
                break;
            case 2:
                cout << "Nossos meios de contato caso aja duvidas ou queira ajuda:\n";
                cout << "Whatsapp: (xx) xxxxx-xxxx\n";
                cout << "Email: exemple@gmail.com\n";
                cout << "Voltar [back]";
            case 3:
                cout << "Deseja sair do site? [s/n]: ";
        }
    return 0;
}