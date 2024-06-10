// Nomor 4. Single Linked list 

#include <iostream>
using namespace std;

// Deklarasi Struct Node
struct Node {
    int data;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;

// Inisialisasi Node
void init() {
    head = nullptr;
    tail = nullptr;
}

// Pengecekan apakah list kosong
bool isEmpty() {
    return (head == nullptr);
}

// Tambah Data di Belakang atau menambahkan elemen diakhir linkedlist
void insertBelakang(int nilai) {
    Node *baru = new (nothrow) Node;
    if (baru == nullptr) {
        cout << "Gagal alokasi memori" << endl;
        return;
    }
    baru->data = nilai;
    baru->next = nullptr;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung Jumlah Node
int hitungList() {
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != nullptr) {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}   

// Hapus Node di Depan atau menghapus elemen pertama dalam linkedlist 
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        if (head->next != nullptr) {
            head = head->next;
        } else {
            head = tail = nullptr;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Tampilkan List
void tampil() {
    Node *bantu = head;
    if (!isEmpty()) {
        while (bantu != nullptr) {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "List masih kosong!" << endl;
    }
}


int main() {
    init();
    insertBelakang(5); tampil();
    insertBelakang(7); tampil();
    insertBelakang(9); tampil();
    insertBelakang(8); tampil();
    insertBelakang(11); tampil();
    insertBelakang(10); tampil();
    hapusDepan(); tampil();
    return 0;
}

