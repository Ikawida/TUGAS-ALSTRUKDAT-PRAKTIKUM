// Soal Unguided 1

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk mengecek apakah kalimat adalah palindrom atau tidak
bool isPalindrome(string sentence) {
    stack<char> charStack; // Membuat objek stack untuk menyimpan karakter

    // Menghapus spasi dan mengubah semua huruf menjadi huruf kecil
    string processedSentence = "";
    for (char c : sentence) {
        if (c != ' ') // Mengabaikan spasi
            processedSentence += tolower(c); // Mengubah menjadi huruf kecil
    }

    // Memasukkan setiap karakter ke dalam stack
    for (char c : processedSentence) {
        charStack.push(c);
    }

    // Membangun ulang kalimat dari stack
    string reversedSentence = "";
    while (!charStack.empty()) {
        reversedSentence += charStack.top(); // Mengambil karakter dari atas stack
        charStack.pop(); // Menghapus karakter dari stack
    }

    // Memeriksa apakah kalimat asli dan yang terbalik sama
    return processedSentence == reversedSentence;
}

// Fungsi utama
int main() {
    string inputSentence;
    cout << "Masukkan kalimat: ";
    getline(cin, inputSentence); // Menggunakan getline untuk membaca seluruh kalimat

    // Memanggil fungsi isPalindrome untuk menentukan apakah kalimat adalah palindrom atau tidak
    if (isPalindrome(inputSentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
