// 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. 

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    // NIM
    int IKA_2311110001; // Variabel untuk menyimpan NIM
    
    // Meminta pengguna untuk memasukkan jumlah simpul (kota)
    int num_nodes;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> num_nodes;

    // Vector untuk menyimpan nama simpul (kota)
    vector<string> nodes(num_nodes);
    
    // Map untuk menyimpan bobot antar simpul (jarak antar kota)
    map<pair<string, string>, int> edges;

    // Meminta pengguna untuk memasukkan nama simpul (kota)
    cout << "Silakan masukkan nama simpul" << endl;
    for (int i = 0; i < num_nodes; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }

    // Meminta pengguna untuk memasukkan bobot antar simpul (jarak antar kota)
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < num_nodes; ++i) {
        for (int j = 0; j < num_nodes; ++j) {
            string from, to;
            cout << nodes[i] << "--> " << nodes[j] << " = ";
            cin >> edges[{nodes[i], nodes[j]}];
        }
    }

    // Output Program
    // Menampilkan nama simpul (kota) di atas matriks
    cout << "\nOutput Program:\n";
    cout << "\t";
    for (int i = 0; i < num_nodes; i++) {
        cout << nodes[i] << "\t";
    }
    cout << endl;

    // Menampilkan matriks jarak antar simpul (jarak antar kota)
    for (int i = 0; i < num_nodes; i++) {
        cout << nodes[i] << "\t"; // Menampilkan nama simpul (kota) di samping matriks
        for (int j = 0; j < num_nodes; j++) {
            cout << edges[{nodes[i], nodes[j]}] << "\t";
        }
        cout << endl;
    }

    return 0;
}
