#include <iostream>
using namespace std;

int main() {

    int x, y, z;

    for(x=0, y=1, z=0; x <= 10 && y <= 10 && z <= 10; x++, y += 2, z += 2) {
        cout << x << " - " << y << " - " << z << "\n";
    }

    system("pause");

    return 0;
}