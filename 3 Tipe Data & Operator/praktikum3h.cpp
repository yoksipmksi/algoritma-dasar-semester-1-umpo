//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    bool hasil;

    cout << "nilai variabel a: " << a << endl;
    cout << "nilai variabel b: " << b << endl;

    hasil = a == b;
    cout << "apakah variabel a == b: " << hasil << endl;

    hasil = a != b;
    cout << "apakah variabel a != b: " << hasil << endl;

    hasil = a > b;
    cout << "apakah variabel a > b: " << hasil << endl;

    hasil = a < b;
    cout << "apakah variabel a < b: " << hasil << endl;

    hasil = a >= b;
    cout << "apakah variabel a >= b: " << hasil << endl;

    hasil = a <= b;
    cout << "apakah variabel a <= b: " << hasil << endl;

    return 0;
}