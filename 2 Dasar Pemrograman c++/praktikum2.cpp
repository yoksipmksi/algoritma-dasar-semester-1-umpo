#include <iostream>
using namespace std;

int main() {
    char chr = 'y';
    const string str = "Dhimas Indra";
    int itgr;
    itgr = 18;
    double dbl = 45.3;

    const int panjang = 10;
    const int lebar = 5;

    cout << "Char                     : " << chr << endl;
    cout << "String                   : " << str << endl;
    cout << "Integer                  : " << itgr << endl;
    cout << "Double                   : " << dbl << endl;
    cout << "Jumlah (panjang * lebar) : " << panjang*lebar << endl;
    return 0;
}