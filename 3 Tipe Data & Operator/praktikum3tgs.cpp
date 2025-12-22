//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int a, b, nim;

    nim = 25534024;
    string nama = "Dhimas Indra Maulana";
    string kelas = "TI-B1 2025";
    string prodi = "Teknik Informatika";
    string universitas = "Universitas Muhammadiyah Ponorogo";

    a = 5;
    b = 7;
    int hasil;

    cout << "NIM           : " << nim << endl;
    cout << "Nama          : " << nama << endl;
    cout << "Kelas         : " << kelas << endl;
    cout << "Program Studi : " << prodi << endl;
    cout << "Universitas   : " << universitas << endl;
    cout << "-------------------------------------------------" << endl;

    hasil = a + b;
    cout << "hasil dari a + b : " << hasil << endl;
    
    hasil = a - b;
    cout << "hasil dari a - b : " << hasil << endl;

    hasil = a * b;
    cout << "hasil dari a * b : " << hasil << endl;

    hasil = a / b;
    cout << "hasil dari b / a : " << hasil << endl;

    hasil = a % b;
    cout << "hasil dari b % a : " << hasil << endl;

    hasil = a & b;
    cout << "hasil dari a & b : " << hasil << endl;

    return 0;
}