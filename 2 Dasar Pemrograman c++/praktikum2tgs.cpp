//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    string nama = "Dhimas Indra";
    int nim = 25534024;
    const double phi = 3.14;
    const int jariJari = 57;   
    double luas = phi * jariJari * jariJari;

    cout << "=========================================" << endl;
    cout << " Program Untuk Menghitung Luas Lingkaran " << endl;
    cout << "=========================================" << endl;
    cout << "NIM               : " << nim << endl;
    cout << "NAMA              : " << nama << endl;
    cout << "Nilai Jari - Jari : " << jariJari << " cm" << endl;
    cout << "Luas Lingkaran    : " << luas << " cm" << endl;
    return 0;
}