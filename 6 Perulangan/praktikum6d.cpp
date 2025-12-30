#include <iostream>
using namespace std;

int main() {
    int jumlahDeret, i;

    cout << "Masukkan jumlah deret: ";
    cin >> jumlahDeret;

    cout << endl;
    for (i = 1; i <= jumlahDeret; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}