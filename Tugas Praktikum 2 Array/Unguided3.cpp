// 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Memastikan n tidak negatif
    if (n <= 0) {
        cout << "Jumlah elemen harus lebih besar dari 0." << endl;
        return 1; // Menghentikan program dengan kode kesalahan
    }

    // Deklarasi array dengan ukuran yang dimasukkan oleh pengguna
    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mencari nilai maksimum dan minimum dari array
    int maksimum = INT_MIN;
    int minimum = INT_MAX;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        maksimum = max(maksimum, arr[i]);
        minimum = min(minimum, arr[i]);
        total += arr[i];
    }

    // Menghitung rata-rata
    double rata_rata = (double)total / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << maksimum << endl;
    cout << "Nilai Minimum: " << minimum << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}