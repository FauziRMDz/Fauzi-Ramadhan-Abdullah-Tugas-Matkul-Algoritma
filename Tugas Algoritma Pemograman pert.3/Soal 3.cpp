#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << angka << " adalah bilangan Genap" << endl;
    } else {
        cout << angka << " adalah bilangan Ganjil" << endl;
    }

    return 0;
}

