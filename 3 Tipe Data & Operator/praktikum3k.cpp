//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    a = 5;
    b = 7;

    b = b + 1;
    c = a + b;
    d = c + c + a;
    e = (c + d) * a;

    cout << "nilai variabel a : " << a << endl;
    cout << "nilai variabel a : " << b << endl;
    cout << "nilai variabel a : " << c << endl;
    cout << "nilai variabel a : " << d << endl;
    cout << "nilai variabel a : " << e << endl;

    return 0;
}