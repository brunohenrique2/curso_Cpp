#include <iostream>
using namespace std;

int main() {

    int count = 0;

    while(count <= 10000) {
        cout << "Numero: " << count << endl;
        if(count == 200) {
            break;
        }
        count++;
    }

    system("pause");
    return 0;
}