//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;

    if (a < b) {
        cout << "nilai variabel a lebih kecil dari b" << endl;
    } else if (a > b) {
        cout << "nilai variabel a lebih besar dari b" << endl;
    } else {
        cout << "nilai variabel a sama dengan b" << endl;
    }

    return 0;
}