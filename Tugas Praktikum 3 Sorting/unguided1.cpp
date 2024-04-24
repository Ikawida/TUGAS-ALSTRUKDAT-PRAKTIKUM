// Membuat Selection Sort

#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengurutkan IPS dengan algoritma Selection Sort
void selectionSort(vector<double> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int max_index = i;
        // Mencari indeks nilai maksimum dalam sisa array
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // Menukar nilai maksimum dengan elemen pertama dalam sisa array
        swap(arr[i], arr[max_index]);
    }
}

int main() {
    // IPS mahasiswa
    vector<double> ips = {3.8, 2.9, 3.3, 4.0, 2.4};

    // Menampilkan IPS sebelum diurutkan
    cout << "IPS sebelum diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    // Memanggil fungsi selectionSort untuk mengurutkan IPS
    selectionSort(ips);

    // Menampilkan IPS setelah diurutkan
    cout << "\nIPS setelah diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    return 0;
}
