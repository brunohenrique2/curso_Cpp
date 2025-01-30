#include <iostream>
using namespace std;

int main() {

    string abc = "abcdefghijklmnopqrstuvwxyz";

    do {
        cout << abc;
    }while(abc != abc);

    system("pause");
    return 0;
    
}