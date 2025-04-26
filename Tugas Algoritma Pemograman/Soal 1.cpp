#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Bilangan Positif" << endl;
    } else if (angka < 0) {
        cout << "Bilangan Negatif" << endl;
    } else {
        cout << "Angka adalah 0" << endl;
    }

    return 0;
}
