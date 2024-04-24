// membuat binary search

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Fungsi untuk pencarian biner
int binary_search(string arr, char target) {
    int low = 0;
    int high = arr.length() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

// Fungsi untuk mencari huruf dalam kalimat
string find_letter(string sentence, char letter) {
    sort(sentence.begin(), sentence.end()); // Mengurutkan kalimat
    int index = binary_search(sentence, letter); // Melakukan pencarian biner
    if (index != -1) {
        return "Huruf '" + string(1, letter) + "' ditemukan pada indeks ke-" + to_string(index) + " dalam kalimat.";
    } else {
        return "Huruf '" + string(1, letter) + "' tidak ditemukan dalam kalimat.";
    }
}

int main() {
    string kalimat;
    char huruf;

    // Input kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Input huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    // Mengonversi huruf ke huruf kecil
    huruf = tolower(huruf);

    // Mencari huruf dalam kalimat
    string hasil = find_letter(kalimat, huruf);

    // Output hasil pencarian
    cout << hasil << endl;

    return 0;
}
