// Membuat Bubble Sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<string> &names) {
    // Mendefinisikan fungsi bubbleSort yang menerima vector string sebagai parameter
    int n = names.size(); // Mendapatkan panjang vektor
    for (int i = 0; i < n-1; i++) { // Loop untuk iterasi melalui semua elemen kecuali elemen terakhir
        for (int j = 0; j < n-i-1; j++) { // Loop untuk melakukan perbandingan dan pertukaran
            if (names[j] > names[j+1]) { // Membandingkan elemen saat ini dengan elemen berikutnya
                swap(names[j], names[j+1]); // Menukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
            }
        }
    }
}

int main() {
    vector<string> names = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    cout << "Nama sebelum diurutkan:" << endl;
    for (const string &name : names) { // Loop untuk menampilkan nama-nama sebelum diurutkan
        cout << name << " ";
    }
    cout << endl;

    bubbleSort(names); // Memanggil fungsi bubbleSort untuk mengurutkan nama-nama

    cout << "\nNama setelah diurutkan:" << endl;
    for (const string &name : names) { // Loop untuk menampilkan nama-nama setelah diurutkan
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
