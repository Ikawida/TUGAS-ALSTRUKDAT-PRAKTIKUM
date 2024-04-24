//1. Soal mengenai Single Linked List 

#include <iostream>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node *next;
};

Node *head = NULL;

// Buat Node Baru
Node* buatNode(string nama, int usia) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    return baru;
}

// Tambah depan
void insertDepan(string nama, int usia) {
    Node *baru = buatNode(nama, usia);
    baru->next = head;
    head = baru;
}

// Tambah belakang
void insertBelakang(string nama, int usia) {
    Node *baru = buatNode(nama, usia);
    if (head == NULL) {
        head = baru;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}

// Tambah Tengah
void insertTengah(string nama, int usia, string nama_sebelum) {
    Node *baru = buatNode(nama, usia);
    Node *temp = head;
    while (temp->nama != nama_sebelum && temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->nama == nama_sebelum) {
        baru->next = temp->next;
        temp->next = baru;
    } else {
        cout << "Nama tidak ditemukan!" << endl;
    }
}

// Tampilkan seluruh data
void tampilkanData() {
    Node *temp = head;
    cout << "Nama\tUsia" << endl;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->usia << endl;
        temp = temp->next;
    }
}

// Hapus data dengan nama tertentu
void hapusData(string nama) {
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Data tidak ditemukan!" << endl;
        return;
    }
    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
}

// Ubah data Michael menjadi Reyn
void ubahData(string nama_lama, string nama_baru, int usia_baru) {
    Node *temp = head;
    while (temp != NULL && temp->nama != nama_lama) {
        temp = temp->next;
    }
    if (temp != NULL) {
        temp->nama = nama_baru;
        temp->usia = usia_baru;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }
}

int main() {
    // Menampilkan data awal
    cout << "Data Mahasiswa Awal:" << endl;
    cout << "Nama\tUsia" << endl;
    insertBelakang("John", 19);
    insertBelakang("Jane", 20);
    insertBelakang("Michael", 18);
    insertBelakang("Yusuke", 19);
    insertBelakang("Akechi", 20);
    insertBelakang("Hoshino", 18);
    insertBelakang("Karin", 18);
    tampilkanData();

    // Operasi penghapusan data "Akechi"
    hapusData("Akechi");
    cout << "\nData setelah penghapusan Akechi:" << endl;
    tampilkanData();

    // Operasi penambahan data "Futaba" di antara "John" dan "Jane"
    insertTengah("Futaba", 18, "John");
    cout << "\nData setelah penambahan Futaba Diantara John dan Jane :" << endl;
    tampilkanData();

    // Operasi penambahan data "Igor" di awal
    insertDepan("Igor", 20);
    cout << "\nData setelah penambahan Igor di awal:" << endl;
    tampilkanData();

    // Operasi pengubahan data "Michael" menjadi "Reyn"
    ubahData("Michael", "Reyn", 18);
    cout << "\nData setelah pengubahan Michael menjadi Reyn:" << endl;
    tampilkanData();

    // Menampilkan data akhir setelah semua operasi selesai
    cout << "\nTampilan seluruh data Mahasiswa setelah semua operasi selesai:" << endl;
    tampilkanData();

    return 0;
}








