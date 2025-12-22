//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    bool data1, data2, data3;

    data1 = 12 < 10;   // false
    data2 = 30 > 25;  // true
    data3 = 'A' == 'a'; // true

    cout << "Hasil dari 12 < 10   : " << data1 << endl;
    cout << "Hasil dari 30 > 25   : " << data2 << endl;
    cout << "Hasil dari 'A' == 'a': " << data3 << endl;
    return 0;
}