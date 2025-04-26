#include <iostream>
using namespace std;

int main() {
    int hargaBarang, jumlahBarang;
    double diskon, totalBayar;

    cout << "Masukkan harga barang: ";
    cin >> hargaBarang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    if (jumlahBarang > 100) {
        diskon = 0.15;
    } else {
        diskon = 0.05;
    }

    double beli = hargaBarang * jumlahBarang;
    double potongan = beli * diskon;
    totalBayar = beli - potongan;

    cout << "Total beli: " << beli << endl;
    cout << "Diskon: " << diskon * 100 << "%" << endl;
    cout << "Total yang harus dibayar: " << totalBayar << endl;

    return 0;
}
