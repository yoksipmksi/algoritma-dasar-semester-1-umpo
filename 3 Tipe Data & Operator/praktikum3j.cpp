//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int a = 555;
    int b = 777;
    int hasil;

    hasil = a & b;
    cout << "hasil dari a & b : " << hasil << endl;

    hasil = a | b;
    cout << "hasil dari a | b : " << hasil << endl;

    hasil = a ^ b;
    cout << "hasil dari a ^ b : " << hasil << endl;

    hasil = ~a;
    cout << "hasil dari ~a : " << hasil << endl;

    hasil = a >> 1;
    cout << "hasil dari a >> 1 : " << hasil << endl;

    hasil = b << 2;
    cout << "hasil dari b << 2 : " << hasil << endl;

    return 0;
}