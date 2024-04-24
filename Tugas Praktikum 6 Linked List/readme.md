# <h1 align="center">Laporan Praktikum Modul 5 Linked List</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori
Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun 
secara sekuensial, saling bersambungan, dinamis adalah senarai berkait (linked 
list).Suatu senarai berkait (linked list) adalah suatu simpul (node) yang dikaitkan dengan simpul yang lain dalam suatu urutan tertentu. Suatu simpul dapat berbentuk suatu struktur atau class [1]. Simpul harus mempunyai satu atau lebih 
elemen struktur atau class yang berisi data. Secara teori, linked list adalah sejumlah node yang dihubungkan secara linier 
dengan bantuan pointer

### A. Single Linked List

Single linked list adalah salah satu struktur data linear yang terdiri dari serangkaian node yang terhubung satu sama lain melalui pointer. Setiap node terdiri dari dua bagian utama: data dan pointer yang menunjuk ke node berikutnya dalam urutan.
Linked List merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list dihubungkan ke elemen lain melalui pointer [2]. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Pointer adalah alamat elemen. Setiap simpul pada dasarnya dibagi atas  dua bagian pertama disebut bagian isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer yang berisi alamat dari node berikutnya atau sebelumnya. Dengan menggunakan struktur seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail.

Berikut adalah karakteristik utama dari single linked list:

1. **Node**: Setiap node dalam linked list menyimpan sebuah elemen data dan sebuah pointer yang menunjuk ke node berikutnya.

2. **Pointer**: Setiap node dalam linked list memiliki sebuah pointer yang menunjuk ke node berikutnya. Pointer pada node terakhir biasanya menunjuk ke NULL, menandakan akhir dari linked list.

3. **Struktur Linear**: Linked list merupakan struktur data linear, yang berarti elemen-elemennya disusun secara berurutan.

4. **Alokasi Dinamis**: Node-node dalam linked list dialokasikan secara dinamis pada saat runtime, sehingga memungkinkan untuk menambah dan menghapus elemen dengan mudah.

5. **Tidak Memerlukan Penyimpanan Kontigu**: Berbeda dengan array, elemen-elemen dalam linked list tidak disimpan secara berurutan dalam memori. Setiap node dialokasikan secara terpisah dan dapat ditempatkan di mana saja dalam memori.

6. **Operasi Dasar**:
   - **Insertion (Penambahan)**: Penambahan elemen dapat dilakukan di awal, tengah, atau akhir linked list.
   - **Deletion (Penghapusan)**: Penghapusan elemen dapat dilakukan dari awal, tengah, atau akhir linked list.
   - **Traversal (Penelusuran)**: Menelusuri setiap elemen dari awal hingga akhir linked list.
   - **Searching (Pencarian)**: Mencari elemen tertentu dalam linked list.
   - **Update (Pembaruan)**: Memperbarui nilai dari elemen tertentu dalam linked list.

Keuntungan dari penggunaan single linked list antara lain kemampuan untuk menambah dan menghapus elemen dengan cepat, alokasi memori yang dinamis, dan fleksibilitas dalam operasi penambahan dan penghapusan. Namun, kelemahannya adalah akses acak yang lambat (tidak seperti array), dan memerlukan overhead tambahan untuk menyimpan pointer antar node.

### B. Double Linked List
Double linked list adalah sebuah struktur data linear yang terdiri dari serangkaian node yang setiap nodenya memiliki dua pointer, yaitu pointer yang menunjuk ke node sebelumnya (previous) dan pointer yang menunjuk ke node berikutnya (next) [3]. Hal ini memungkinkan untuk traversal maju dan mundur dalam linked list.

Double Linked List adalah struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

Keuntungan utama dari double linked list adalah kemampuannya untuk traversal maju dan mundur dengan efisien, serta kemampuan untuk menambah dan menghapus elemen dengan cepat di kedua ujung linked list. Namun, double linked list memerlukan lebih banyak ruang untuk menyimpan pointer tambahan, dan kompleksitas operasinya sedikit lebih tinggi daripada single linked list.

### C. Linkedlist Non Circular

Linked list non circular adalah salah satu jenis dari struktur data linked list di mana elemen-elemen atau node-node dalam linked list tidak membentuk lingkaran, artinya node terakhir dalam linked list tidak menunjuk kembali ke node pertama [4]. Linked list non circular merupakan linked list dengan node pertama (head) dan  node terakhir (tail) yang tidak saling terhubung. Pointer terakhir (tail) pada Linked  List ini selalu bernilai ‘NULL’ sebagai pertanda data terakhir dalam list-nya. 

Keuntungan dari penggunaan linked list non circular adalah kesederhanaannya dan kemampuan untuk menambah dan menghapus elemen dengan cepat. Namun, kelemahan utamanya adalah tidak dapat melakukan traversal kembali ke node awal dari node terakhir secara langsung. Ini membuat linked list non circular lebih cocok digunakan dalam kasus di mana tidak diperlukan traversal mundur atau tidak ada kebutuhan untuk mengakses kembali node pertama dari node terakhir secara langsung.

### D. Linkedlist Circular 
Linked list circular adalah salah satu jenis dari struktur data linked list di mana elemen-elemen atau node-node dalam linked list membentuk lingkaran, artinya node terakhir dalam linked list menunjuk kembali ke node pertama.

Linked list circular merupakan linked list yang tidak memiliki akhir karena node  terakhir (tail) tidak bernilai ‘NULL’, tetapi terhubung dengan node pertama (head).  Saat menggunakan linked list circular kita membutuhkan dummy node atau node  pengecoh yang biasanya dinamakan dengan node current supaya program dapat  berhenti menghitung data ketika node current mencapai node pertama (head). Linked list circular dapat digunakan untuk menyimpan data yang perlu diakses  secara berulang, seperti daftar putar lagu, daftar pesan dalam antrian, atau  penggunaan memori berulang dalam suatu aplikasi

Keuntungan dari penggunaan linked list circular adalah kemampuan untuk melakukan traversal dari node terakhir kembali ke node pertama secara langsung, serta kesederhanaannya dalam implementasi. Namun, perlu diingat bahwa perlu perhatian ekstra dalam melakukan traversal dan operasi lainnya untuk menghindari terjebak dalam lingkaran yang tidak berakhir.

## Langkah Praktikum 
### 1. Single Linked List
#### Kode program

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah list kosong
bool isEmpty() {
    return (head == NULL);
}

// Tambah Data di Depan
void insertDepan(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang
void insertBelakang(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
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
    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Data di Tengah
void insertTengah(int data, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *baru = new Node();
        baru->data = data;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Node di Depan
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        if (head->next != NULL) {
            head = head->next;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Belakang
void hapusBelakang() {
    if (!isEmpty()) {
        Node *hapus = tail;
        if (head != tail) {
            Node *bantu = head;
            while (bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        } else {
            head = tail = NULL;
        }
        delete hapus;
    } else {
        cout << "List kosong!" << endl;
    }
}

// Hapus Node di Tengah
void hapusTengah(int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
    } else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        Node *hapus;
        Node *bantu = head;
        for (int nomor = 1; nomor < posisi - 1; nomor++) {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
}

// Ubah Data di Depan
void ubahDepan(int data) {
    if (!isEmpty()) {
        head->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah
void ubahTengah(int data, int posisi) {
    if (!isEmpty()) {
        if (posisi < 1 || posisi > hitungList()) {
            cout << "Posisi di luar jangkauan" << endl;
        } else if (posisi == 1) {
            cout << "Posisi bukan posisi tengah" << endl;
        } else {
            Node *bantu = head;
            for (int nomor = 1; nomor < posisi; nomor++) {
                bantu = bantu->next;
            }
            bantu->data = data;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Belakang
void ubahBelakang(int data) {
    if (!isEmpty()) {
        tail->data = data;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Semua Node
void clearList() {
    Node *hapus;
    while (head != NULL) {
        hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil() {
    Node *bantu = head;
    if (!isEmpty()) {
        while (bantu != NULL) {
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
    insertDepan(3); tampil();
    insertBelakang(5); tampil();
    insertDepan(2); tampil();
    insertDepan(1); tampil();
    hapusDepan(); tampil();
    hapusBelakang(); tampil();
    insertTengah(7, 2); tampil();
    hapusTengah(2); tampil();
    ubahDepan(1); tampil();
    ubahBelakang(8); tampil();
    ubahTengah(11, 2); tampil();
    clearList();
    return 0;
}
```
#### Output

<img width="960" alt="Screenshot 2024-04-24 043040" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/ec211e23-0434-4037-932c-585af9ae2663">

#### Interpretasi
Berikut adalah penjelasan singkat tentang setiap bagian dari kode:

1. **Deklarasi Struct Node**: Mendefinisikan sebuah struct bernama `Node` yang memiliki dua anggota: `data`, yang merupakan nilai yang disimpan dalam node, dan `next`, yang merupakan pointer ke node berikutnya dalam linked list.

2. **Variabel Global `head` dan `tail`**: Mendefinisikan dua pointer global, `head` dan `tail`, yang digunakan untuk menunjukkan node pertama dan terakhir dalam linked list.

3. **Fungsi `init()`**: Inisialisasi linked list dengan mengatur `head` dan `tail` menjadi NULL.

4. **Fungsi `isEmpty()`**: Memeriksa apakah linked list kosong. Mengembalikan `true` jika `head` adalah NULL.

5. **Fungsi-fungsi untuk Penambahan Node**:
   - `insertDepan(int nilai)`: Menambahkan node baru dengan nilai tertentu di depan linked list.
   - `insertBelakang(int nilai)`: Menambahkan node baru dengan nilai tertentu di belakang linked list.
   - `insertTengah(int data, int posisi)`: Menambahkan node baru dengan nilai tertentu pada posisi tertentu di tengah linked list.

6. **Fungsi `hitungList()`**: Menghitung jumlah node dalam linked list dan mengembalikan jumlahnya.

7. **Fungsi-fungsi untuk Penghapusan Node**:
   - `hapusDepan()`: Menghapus node pertama dari linked list.
   - `hapusBelakang()`: Menghapus node terakhir dari linked list.
   - `hapusTengah(int posisi)`: Menghapus node pada posisi tertentu di tengah linked list.

8. **Fungsi-fungsi untuk Perubahan Data Node**:
   - `ubahDepan(int data)`: Mengubah nilai data dari node pertama.
   - `ubahBelakang(int data)`: Mengubah nilai data dari node terakhir.
   - `ubahTengah(int data, int posisi)`: Mengubah nilai data dari node pada posisi tertentu di tengah linked list.

9. **Fungsi `clearList()`**: Menghapus semua node dari linked list.

10. **Fungsi `tampil()`**: Menampilkan isi dari linked list.

11. **Fungsi `main()`**: Pada fungsi utama, inisialisasi linked list, kemudian dilakukan sejumlah operasi penambahan, penghapusan, perubahan data, dan tampilan isi linked list.

Setiap operasi yang dilakukan diikuti dengan pemanggilan fungsi `tampil()` untuk menampilkan isi linked list saat itu. Kode tersebut memberikan kemampuan untuk memanipulasi linked list dengan berbagai operasi dasar seperti menambah, menghapus, dan mengubah nilai data, serta menampilkan isi dari linked list.

### 2. Double Linked List
#### Kode Program 
```C++ 
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
#### Output

<img width="960" alt="Screenshot 2024-04-24 044324" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/40228c66-fc33-449b-ab19-d9e45389a66d">

<img width="960" alt="Screenshot 2024-04-24 044346" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/41937fda-a2e1-4ee0-b1d2-e1d05eed63a0">

#### Interpretasi
Berikut adalah penjelasan mengenai kode program yang digunakan:

1. **Deklarasi Kelas Node**:
    - Kelas `Node` mendefinisikan elemen-elemen dari Doubly Linked List.
    - Setiap node memiliki tiga anggota: `data` untuk menyimpan nilai data, `prev` untuk menunjuk ke node sebelumnya, dan `next` untuk menunjuk ke node selanjutnya.

2. **Deklarasi Kelas DoublyLinkedList**:
    - Kelas `DoublyLinkedList` menyediakan fungsi-fungsi untuk mengelola Doubly Linked List.
    - Variabel anggota `head` dan `tail` adalah pointer yang menunjuk ke node pertama (kepala) dan terakhir (ekor) dalam Doubly Linked List.

3. **Fungsi `push(int data)`**:
    - Menambahkan node baru dengan nilai data tertentu di depan Doubly Linked List.
    - Jika Doubly Linked List tidak kosong, node baru akan menjadi node sebelumnya untuk kepala yang ada sebelumnya.

4. **Fungsi `pop()`**:
    - Menghapus node pertama (kepala) dari Doubly Linked List.
    - Jika node yang dihapus adalah satu-satunya node dalam list, variabel `tail` diatur menjadi NULL.

5. **Fungsi `update(int oldData, int newData)`**:
    - Memperbarui nilai data dari node dengan nilai data tertentu.
    - Mencari node dengan nilai data yang sesuai dan mengubah nilainya menjadi `newData`.

6. **Fungsi `deleteAll()`**:
    - Menghapus semua node dari Doubly Linked List.
    - Variabel `head` dan `tail` diatur menjadi NULL.

7. **Fungsi `display()`**:
    - Menampilkan isi dari Doubly Linked List dengan menelusuri dari kepala hingga NULL dan mencetak nilai data dari setiap node.

8. **Fungsi `main()`**:
    - Fungsi utama yang menangani interaksi dengan pengguna.
    - Menampilkan menu yang memungkinkan pengguna untuk menambah, menghapus, memperbarui, menghapus semua data, menampilkan isi, atau keluar dari program.
    - Program terus berjalan dan menunggu input dari pengguna hingga pengguna memilih untuk keluar.

Program ini memberikan antarmuka sederhana yang memungkinkan pengguna untuk melakukan operasi-operasi dasar pada Doubly Linked List, seperti menambah, menghapus, memperbarui, dan menampilkan elemen-elemen dalam list.

### 3. Program Single Linked List Circular
#### Kode Program 
```C++ 
#include <iostream>
using namespace std;

///Program Single Linked List Circular

// Deklarasi Struct Node
struct Node {
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init(){
    head = NULL;
    tail = head;
}

//Pengecekan
int isEmpty() {
    if (head == NULL)
        return 1; //true
    else
        return 0; //false
}

// Buat Node Baru
void buatNode(string data) {
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// Hitung List
int hitungList() {
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL){
        jumlah++;
        bantu = bantu -> next;
    }

    return jumlah;
}

// Tambah depan
void insertDepan(string data) {
    //Buat Node baru
    buatNode(data);

    if (isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        while (tail->next != head) {
            tail = tail->next;
        }

        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// Tambah belakang
void insertBelakang(string data) {
    //Buat Node Baru
    buatNode(data);

    if(isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        while (tail->next != head) {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
    }
}

// Tambah Tengah
void insertTengah(string data, int posisi) {
    if (isEmpty() == 1) {
        head = baru;
        tail = head;
        baru->next = head;
    } else {
        baru->data = data;

        //transvering
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan() {
    if (isEmpty() == 0) {
        hapus = head;
        tail = head;

        if(hapus->next == head) {
            head = NULL;
            tail = NULL;
            delete hapus;
        } else {
            while (tail->next != hapus) {
                tail = tail->next;
            }

            head = head->next;
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang() {
    if (isEmpty() == 0) {
        hapus = head;
        tail = head;

        if (hapus->next == head) {
            head = NULL;
            tail = NULL;
            delete hapus;
        } else {
            while (hapus->next != head) {
                hapus = hapus->next;
            }
            
            while (tail->next != hapus) {
                tail = tail->next;
            }

            tail->next = head;
            hapus->next = NULL;
            delete hapus;
        }
    } else {
        cout << "List masih kosong !" << endl;
    }
}

//Hapus tengah
void hapusTengah(int posisi) {
    if (isEmpty() == 0) {
        // transvering 
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor ++;
        } 

        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    } else {
        cout << "List masih kosong! " << endl;
    }
}

// Hapus List
void clearList() {
    if (head != NULL) {
        hapus = head->next;

        while (hapus != head) {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }

        delete head;
        head = NULL;
    }

    cout << "List berhasil dihapus !" << endl; 
}

// Tampilkan List
void tampil() {
    if (isEmpty() == 0) {
        tail = head;

        do {
            cout << tail->data << ends;
            tail = tail->next;
        } while (tail != head) ;

        cout << endl;
    } else {
        cout << "List masih kosong !" << endl;
    }
}

int main() {
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();
    return 0;
}
```
#### Output

<img width="960" alt="Screenshot 2024-04-24 044418" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/dfe7d821-7262-48c8-b28c-7ba2bea0bb8f">

#### Interpretasi
Berikut adalah penjelasan mengenai kode program yang digunakan: 

1. **Deklarasi Struktur Node**: Program mendefinisikan sebuah struktur data `Node` yang memiliki dua anggota, yaitu `data` untuk menyimpan informasi dan `next` untuk menunjukkan ke node selanjutnya dalam linked list.

2. **Deklarasi Variabel Global**: Program mendeklarasikan beberapa variabel global seperti `head`, `tail`, `baru`, `bantu`, dan `hapus` yang digunakan untuk menyimpan informasi terkait dengan linked list.

3. **Inisialisasi**: Fungsi `init()` digunakan untuk menginisialisasi linked list dengan mengatur `head` dan `tail` menjadi `NULL`.

4. **Operasi Dasar Linked List**:
   - Fungsi `isEmpty()` digunakan untuk memeriksa apakah linked list kosong.
   - Fungsi `buatNode(string data)` digunakan untuk membuat node baru dengan data yang diberikan.
   - Fungsi `hitungList()` digunakan untuk menghitung jumlah node dalam linked list.

5. **Operasi Penambahan**:
   - Fungsi `insertDepan(string data)` digunakan untuk menambahkan node baru di awal linked list.
   - Fungsi `insertBelakang(string data)` digunakan untuk menambahkan node baru di akhir linked list.
   - Fungsi `insertTengah(string data, int posisi)` digunakan untuk menambahkan node baru pada posisi tertentu dalam linked list.

6. **Operasi Penghapusan**:
   - Fungsi `hapusDepan()` digunakan untuk menghapus node pertama dalam linked list.
   - Fungsi `hapusBelakang()` digunakan untuk menghapus node terakhir dalam linked list.
   - Fungsi `hapusTengah(int posisi)` digunakan untuk menghapus node pada posisi tertentu dalam linked list.

7. **Operasi Lainnya**:
   - Fungsi `clearList()` digunakan untuk menghapus semua node dalam linked list.
   - Fungsi `tampil()` digunakan untuk menampilkan isi dari linked list.

8. **Fungsi `main()`**: Di dalam fungsi `main()`, program melakukan beberapa operasi pada linked list seperti penambahan di depan dan di belakang, penghapusan di depan dan di belakang, serta penambahan dan penghapusan di tengah. Setiap operasi diikuti dengan pemanggilan fungsi `tampil()` untuk menampilkan isi linked list setelah operasi tersebut dilakukan.

## Tugas Praktikum
### 1.  Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. 
#### Kode Program 
```C++
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
```
#### Output

<img width="960" alt="Screenshot 2024-04-24 044851" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/dc0c4940-a811-4150-9e0c-ba00c1492fb3">

<img width="960" alt="Screenshot 2024-04-24 044938" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/d2863394-cf09-412c-a678-f436bb61dd67">

<img width="960" alt="Screenshot 2024-04-24 044953" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/dd126227-23d0-49f3-a13a-31ba056dd2ea">

#### Interpretasi
Program ini merupakan implementasi dari linked list non-circular untuk menyimpan data mahasiswa berupa nama dan usia. Pada awalnya, dilakukan deklarasi struktur `Node` yang memiliki atribut nama, usia, dan pointer ke node berikutnya. Variabel `head` diinisialisasi dengan nilai `NULL` untuk menunjukkan bahwa linked list masih kosong. Program kemudian menyediakan beberapa fungsi utama, seperti pembuatan node baru, penambahan node di depan, di belakang, atau di antara dua node tertentu, tampilan seluruh data, penghapusan data, dan pengubahan data. 

Ketika program dimulai, data awal mahasiswa ditampilkan. Selanjutnya, dilakukan beberapa operasi terhadap linked list, seperti penghapusan data "Akechi", penambahan data "Futaba" di antara "John" dan "Jane", penambahan data "Igor" di awal linked list, dan pengubahan data "Michael" menjadi "Reyn". Setiap operasi tersebut mengubah struktur linked list dengan memanipulasi pointer antar node sesuai kebutuhan operasi yang dijalankan. 

Setelah setiap operasi, dilakukan pemanggilan fungsi untuk menampilkan data mahasiswa secara keseluruhan guna memperlihatkan hasil akhir setelah operasi dilakukan. Dengan cara ini, program memberikan kemampuan kepada pengguna untuk mengelola data mahasiswa dengan berbagai operasi seperti penambahan, penghapusan, dan pengubahan, serta memberikan tampilan data secara menyeluruh setelah operasi-operasi tersebut dilakukan.

Berikut adalah penjelasan mengenai kode program yang digunakan:

1. **Deklarasi Struct Node**
- `struct Node` digunakan untuk mendefinisikan struktur data node dalam linked list.
- Setiap node memiliki dua atribut: `nama` untuk menyimpan nama mahasiswa, `usia` untuk menyimpan usia mahasiswa, dan `next` yang merupakan pointer ke node berikutnya dalam linked list.

2. **Deklarasi Variabel Head**
- Variabel `head` adalah pointer yang menunjuk ke node pertama dalam linked list. Awalnya diinisialisasi dengan nilai `NULL` untuk menandakan bahwa linked list masih kosong.

3. **Fungsi Buat Node Baru**
- Fungsi ini digunakan untuk membuat node baru dengan nama dan usia yang diberikan.
- Memesan memori untuk node baru, menginisialisasi nilai atributnya, dan mengembalikan pointer ke node tersebut.

4. **Fungsi Tambah Node di Depan**
- Fungsi ini menambahkan node baru di depan linked list.
- Membuat node baru menggunakan fungsi `buatNode`, kemudian mengatur pointer next node baru untuk menunjuk ke head, dan akhirnya mengatur head untuk menunjuk ke node baru.

5. **Fungsi Tambah Node di Belakang**
- Fungsi ini menambahkan node baru di belakang linked list.
- Jika linked list masih kosong (head NULL), node baru langsung dijadikan head.
- Jika tidak, mencari node terakhir dengan melanjutkan traversal hingga menemukan node dengan pointer next NULL, lalu mengatur pointer next node terakhir tersebut untuk menunjuk ke node baru.

6.**Fungsi Tambah Node di Tengah**
- Fungsi ini menambahkan node baru di antara dua node tertentu.
- Mencari node dengan nama tertentu (`nama_sebelum`), kemudian memasukkan node baru di antara node tersebut dan node berikutnya.

7. **Fungsi Tampilkan Seluruh Data**
- Fungsi ini menampilkan seluruh data mahasiswa (nama dan usia) dalam linked list.
- Melakukan traversal dari head hingga NULL sambil mencetak nama dan usia setiap node.

8. **Fungsi Hapus Data dengan Nama Tertentu**
- Fungsi ini menghapus node dengan nama tertentu dari linked list.
- Melakukan traversal dari head hingga menemukan node dengan nama yang sesuai.
- Jika node yang dihapus adalah head, maka head diupdate untuk menunjuk ke node berikutnya.
- Jika bukan, pointer next node sebelum node yang dihapus diatur untuk menunjuk ke node setelahnya, kemudian node dihapus.

9. **Fungsi Ubah Data Nama dan Usia**
- Fungsi ini mengubah nama dan usia node dengan nama tertentu dalam linked list.
- Melakukan traversal dari head hingga menemukan node dengan nama yang sesuai, lalu mengubah nilai nama dan usianya.

10. **Fungsi Main**
- Pada fungsi `main`, dilakukan pemanggilan berbagai fungsi yang telah didefinisikan untuk melakukan operasi seperti penambahan, penghapusan, dan pengubahan data, serta menampilkan hasil operasi menggunakan fungsi `tampilkanData()`.

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
#### Kode Program 
```C++
#include <iostream>
using namespace std;

class Node {
public:
    string namaProduk; // Nama produk
    int harga; // Harga produk
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambahkan produk ke awal daftar
    void tambah(string namaProduk, int harga) {
        Node* newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->harga = harga;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    // Fungsi untuk menambahkan produk setelah produk tertentu
    void tambahSetelah(string namaProduk, int harga, string namaProdukSebelumnya) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProdukSebelumnya) {
            current = current->next;
        }
        if (current != nullptr) {
            Node* newNode = new Node;
            newNode->namaProduk = namaProduk;
            newNode->harga = harga;
            newNode->prev = current;
            newNode->next = current->next;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            } else {
                tail = newNode;
            }
            current->next = newNode;
        } else {
            cout << "Produk sebelumnya tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menghapus produk dari awal daftar
    void hapus() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    // Fungsi untuk mengupdate nama produk dan harga berdasarkan nama produk lama
    bool update(string namaProdukLama, string namaProdukBaru, int hargaBaru) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk == namaProdukLama) {
                current->namaProduk = namaProdukBaru;
                current->harga = hargaBaru;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Fungsi untuk menghapus produk berdasarkan nama produk
    void hapusBerdasarkanNama(string namaProduk) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProduk) {
            current = current->next;
        }
        if (current != nullptr) {
            if (current->prev != nullptr) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next != nullptr) {
                current->next->prev = current->prev;
            } else {
                tail = current->prev;
            }
            delete current;
        } else {
            cout << "Produk tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menghapus semua produk dari daftar
    void hapusSemua() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menampilkan daftar produk beserta harga
    void tampilkan() {
        Node* current = head;
        cout << "Nama Produk\tHarga" << endl;
        while (current != nullptr) {
            cout << current->namaProduk << "\t\t" << current->harga << endl;
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    // Menambahkan produk awal ke daftar
    list.tambah("Originote", 60000);
    list.tambah("Somethinc", 150000);
    list.tambah("Skintific", 100000);
    list.tambah("Wardah", 50000);
    list.tambah("Hanasui", 30000);

    // Menampilkan produk awal
    cout << "Daftar Produk Awal:" << endl;
    list.tampilkan();

    // Menu operasi
    while (true) {
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string namaProduk;
                int harga;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                list.tambah(namaProduk, harga);
                break;
            }
            case 2: {
                string namaProduk;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusBerdasarkanNama(namaProduk);
                break;
            }
            case 3: {
                string namaProdukLama, namaProdukBaru;
                int hargaBaru;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> namaProdukLama;
                cout << "Masukkan nama produk baru: ";
                cin >> namaProdukBaru;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru;
                bool berhasil = list.update(namaProdukLama, namaProdukBaru, hargaBaru);
                if (!berhasil) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk, namaProdukSebelumnya;
                int harga;
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> namaProdukSebelumnya;
                list.tambahSetelah(namaProduk, harga, namaProdukSebelumnya);
                break;
            }
            case 5: {
                // Case 5: Hapus Data Urutan Tertentu
                break;
            }
            case 6: {
                list.hapusSemua();
                break;
            }
            case 7: {
                list.tampilkan();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }

    return 0;
}
```
#### Output


<img width="960" alt="Screenshot 2024-04-24 052031" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/86f818b2-b441-4218-a035-083026f26307">

<img width="960" alt="Screenshot 2024-04-24 052100" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/c962052f-e4fa-4785-bc70-367c4d2d47af">

<img width="960" alt="Screenshot 2024-04-24 052126" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/5d2d0af5-dc2c-4a60-92e0-2f679ce01f64">

#### Interpretasi 
Program ini merupakan implementasi sederhana dari struktur data double linked list yang digunakan untuk mengelola daftar produk skincare di sebuah toko. Ketika program dimulai, dua kelas yang penting, yaitu `Node` dan `DoublyLinkedList`, didefinisikan. Kelas `Node` merepresentasikan satu elemen dalam linked list dengan menyimpan informasi tentang nama produk, harga, serta pointer ke node sebelumnya dan node berikutnya. Sementara itu, kelas `DoublyLinkedList` bertanggung jawab atas manajemen keseluruhan linked list dan menyediakan berbagai fungsi untuk operasi seperti penambahan, penghapusan, pengubahan, dan penampilan data.

Setelah kelas-kelas didefinisikan, program membuat objek dari kelas `DoublyLinkedList` dan menambahkan beberapa produk awal ke dalam linked list menggunakan fungsi `tambah`. Setelah itu, program menampilkan menu operasi kepada pengguna, yang mencakup opsi untuk menambah, menghapus, mengupdate, dan menampilkan data produk. Pengguna diminta untuk memilih opsi dari menu tersebut.

Berdasarkan pilihan pengguna, program menjalankan fungsi yang sesuai dari kelas `DoublyLinkedList` untuk menangani operasi yang diminta. Misalnya, jika pengguna memilih untuk menambah produk baru, program akan menjalankan fungsi `tambah`. Jika pengguna memilih untuk menghapus produk, program akan menjalankan fungsi `hapusBerdasarkanNama`.

Setelah operasi dieksekusi, program menampilkan kembali data produk yang telah diperbarui atau diubah sesuai dengan aksi yang dilakukan oleh pengguna. Hal ini memungkinkan pengguna untuk melihat perubahan yang telah dilakukan. Program berada dalam loop tak terbatas, sehingga setelah satu operasi selesai dieksekusi, program akan kembali menampilkan menu dan menunggu input dari pengguna untuk melakukan operasi berikutnya.

Jika pengguna memilih untuk keluar dari program dengan memilih opsi keluar, program akan berakhir dan kontrol dikembalikan ke sistem operasi. Dengan cara ini, program memberikan antarmuka interaktif bagi pengguna untuk mengelola daftar produk skincare, dengan kemampuan untuk menambahkan, menghapus, mengupdate, dan menampilkan data produk sesuai kebutuhan mereka.

Berikut adalah penjelasan mengenai kode program yang digunakan:

1. **Kelas `Node`**:
   - Mendefinisikan sebuah kelas `Node` yang merepresentasikan elemen dalam linked list.
   - Memiliki atribut-atribut:
     - `namaProduk`: string untuk menyimpan nama produk.
     - `harga`: integer untuk menyimpan harga produk.
     - `prev`: pointer ke node sebelumnya dalam linked list.
     - `next`: pointer ke node berikutnya dalam linked list.

2. **Kelas `DoublyLinkedList`**:
   - Mendefinisikan kelas `DoublyLinkedList` yang bertanggung jawab atas manajemen linked list.
   - Memiliki atribut-atribut:
     - `head`: pointer ke node pertama dalam linked list.
     - `tail`: pointer ke node terakhir dalam linked list.
   - Memiliki fungsi-fungsi sebagai berikut:
     - `tambah`: menambahkan node baru ke awal linked list.
     - `tambahSetelah`: menambahkan node baru setelah node tertentu dalam linked list.
     - `hapus`: menghapus node pertama dari linked list.
     - `update`: mengupdate nama produk dan harga berdasarkan nama produk lama.
     - `hapusBerdasarkanNama`: menghapus node berdasarkan nama produk.
     - `hapusSemua`: menghapus semua node dari linked list.
     - `tampilkan`: menampilkan semua nama produk dan harganya dalam linked list.

3. **Fungsi `main`**:
   - Membuat objek dari kelas `DoublyLinkedList`.
   - Menambahkan beberapa produk awal ke dalam linked list menggunakan fungsi `tambah`.
   - Menampilkan daftar produk awal.
   - Memulai loop tak terbatas untuk menampilkan menu operasi kepada pengguna.
   - Bergantung pada pilihan pengguna, menjalankan fungsi yang sesuai dari kelas `DoublyLinkedList` untuk menangani operasi yang diminta.
   - Melakukan loop kembali untuk menampilkan menu operasi setelah satu operasi selesai dieksekusi.
   - Program berakhir ketika pengguna memilih opsi keluar.

### 3. Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa, dengan menggunakan input dari user. 

* NB: Jawaban untuk soal 1,2,3 pada menu Unguided modul linked list circular dan non-circular dijadikan satu karena saling berkaitan.

#### Kode Program 
```C++
#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    string nama;
    string nim;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    // Konstruktor
    LinkedList() {
        head = nullptr;
    }

    // Fungsi untuk menambahkan node di depan
    void tambahDepan(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk menambahkan node di belakang
    void tambahBelakang(string nama, string nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Fungsi untuk menambahkan node di tengah setelah node tertentu
    void tambahTengah(string nama, string nim, int posisi) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;

        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (posisi == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi - 1; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Fungsi untuk mengubah data pada node pertama
    void ubahDepan(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        head->nama = nama;
        head->nim = nim;
    }

    // Fungsi untuk mengubah data pada node terakhir
    void ubahBelakang(string nama, string nim) {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk mengubah data pada node di tengah
    void ubahTengah(string nama, string nim, int posisi) {
        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* current = head;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        current->nama = nama;
        current->nim = nim;
    }

    // Fungsi untuk menghapus node pertama
    void hapusDepan() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node pertama berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus node terakhir
    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Node terakhir berhasil dihapus." << endl;
            return;
        }
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        cout << "Node terakhir berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus node di tengah
    void hapusTengah(int posisi) {
        if (posisi <= 0) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }
        if (posisi == 1) {
            hapusDepan();
            return;
        }
        Node* current = head;
        Node* prev = nullptr;
        for (int i = 1; i < posisi; i++) {
            if (current == nullptr) {
                cout << "Posisi tidak valid!" << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }
        prev->next = current->next;
        delete current;
        cout << "Node pada posisi " << posisi << " berhasil dihapus." << endl;
    }

    // Fungsi untuk menghapus seluruh node
    void hapusList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        cout << "Seluruh node berhasil dihapus." << endl;
    }

    // Fungsi untuk menampilkan isi linked list
    void tampilkan() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Linked list kosong" << endl;
            return;
        }
        cout << "Isi Linked List:" << endl;
        while (current != nullptr) {
            cout << "Nama: " << current->nama << ", NIM: " << current->nim << endl;
            current = current->next;
        }
    }

    // Destruktor
    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList linkedList;
    int pilihan, posisi;
    string nama, nim;

    cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
    do {
        cout << "\nMenu: " << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.tambahDepan(nama, nim);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 2:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.tambahBelakang(nama, nim);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 3:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.tambahTengah(nama, nim, posisi);
                cout << "Data berhasil ditambahkan." << endl;
                break;
            case 4:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.ubahDepan(nama, nim);
                cout << "Data berhasil diubah." << endl;
                break;
            case 5:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                linkedList.ubahBelakang(nama, nim);
                cout << "Data berhasil diubah." << endl;
                break;
            case 6:
                cout << "Masukkan nama mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM mahasiswa: ";
                cin >> nim;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.ubahTengah(nama, nim, posisi);
                cout << "Data berhasil diubah." << endl;
                break;
            case 7:
                linkedList.hapusDepan();
                break;
            case 8:
                linkedList.hapusBelakang();
                break;
            case 9:
                cout << "Masukkan posisi: ";
                cin >> posisi;
                linkedList.hapusTengah(posisi);
                break;
            case 10:
                linkedList.hapusList();
                break;
            case 11:
                linkedList.tampilkan();
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 0);

    return 0;
}
```
#### Output

<img width="960" alt="Screenshot 2024-04-24 061841" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/fbd9e6e9-0c64-4f73-8ca5-3cf2de1f877c">

a. Tambahkan data berikut diantara Farrel dan Denis:
Wati 2330004 

<img width="960" alt="Screenshot 2024-04-24 062001" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/76e233f4-bd6a-460c-abcc-a4aa68aa8295">

b. Hapus data Denis 

<img width="960" alt="Screenshot 2024-04-24 062226" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/dd67e002-51c5-42a5-a1e8-8b080002df0a">

c. Tambahkan data berikut di awal: 
Owi 2330000 

<img width="960" alt="Screenshot 2024-04-24 062431" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/88801e9a-7223-4b0b-8d30-daccd7263279">

d. Tambahkan data berikut di akhir: 
David 23300100 

<img width="960" alt="Screenshot 2024-04-24 062550" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/27646b40-ad73-4702-9336-976c79a65f45">

e. Ubah data Udin menjadi data berikut: 
Idin 23300045 

<img width="960" alt="Screenshot 2024-04-24 062650" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/429fbcbd-e3db-4b60-b19b-345a01472b34">

f. Ubah data terkahir menjadi berikut: 
Lucy 23300101 

<img width="960" alt="Screenshot 2024-04-24 062745" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/7edf3aa0-70be-45ff-bf61-4a9025f7231e">

g. Hapus data awal 

<img width="960" alt="Screenshot 2024-04-24 062846" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/2bf51710-e12a-44b0-8cd8-0819178af096">

h. Ubah data awal menjadi berikut: 
Bagas 2330002 

<img width="960" alt="Screenshot 2024-04-24 063003" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/b143eb9e-888c-42fc-94a5-99b3edadcb9e">

i. Hapus data akhir 

<img width="960" alt="Screenshot 2024-04-24 063126" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/e6aea7ec-67eb-4ed5-a83b-935b292d614f">

j. Tampilkan seluruh data

<img width="960" alt="Screenshot 2024-04-24 063154" src="https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/cf8c5d0e-7742-4b5c-84ee-0973610c7b04">

#### Interpretasi

Program tersebut adalah implementasi dari sebuah linked list non-circular dalam bahasa C++. Linked list adalah struktur data yang terdiri dari serangkaian node, di mana setiap node memiliki dua bagian: data (dalam hal ini, nama dan NIM mahasiswa) dan pointer yang menunjuk ke node berikutnya. Program dimulai dengan mendefinisikan struktur `Node` yang menyimpan data mahasiswa dan pointer ke node berikutnya. Kemudian, program mengimplementasikan kelas `LinkedList` yang memiliki berbagai fungsi untuk operasi dasar pada linked list, seperti menambah, mengubah, dan menghapus node, serta menampilkan isi linked list.

Di dalam fungsi `main()`, program menampilkan menu operasi yang tersedia kepada pengguna. Pengguna dapat memilih operasi yang diinginkan, seperti menambah data di depan, belakang, atau di tengah linked list, mengubah data, menghapus data, atau menampilkan seluruh isi linked list. Setelah pengguna memilih operasi, program akan memanggil fungsi yang sesuai dari objek `linkedList`. Proses ini terus berlanjut hingga pengguna memilih untuk keluar dari program.

Secara keseluruhan, program ini menyediakan antarmuka yang interaktif untuk pengelolaan data mahasiswa menggunakan linked list. Pengguna dapat dengan mudah menambah, mengubah, menghapus, dan menampilkan data mahasiswa sesuai kebutuhan mereka. Dengan menggunakan linked list, program dapat mengelola jumlah data yang dinamis tanpa harus membatasi ukuran data yang disimpan.

Berikut adalah penjelasan mengenai kode program yang digunakan: 

Kode program yang diberikan adalah sebuah program C++ yang menggunakan konsep linked list non-circular untuk menyimpan data nama dan NIM mahasiswa serta menyediakan menu untuk melakukan operasi seperti menambah, mengubah, menghapus, dan menampilkan data pada linked list.

1. **Pendahuluan dan Struktur Node**
- Program dimulai dengan inklusi pustaka iostream untuk input-output.
- Didefinisikan struktur `Node` yang memiliki tiga atribut: `nama` (string), `nim` (string), dan `next` (pointer ke node berikutnya).
- Dilanjutkan dengan deklarasi kelas `LinkedList` yang akan menyimpan implementasi linked list.

2. **Implementasi Kelas LinkedList**
- `LinkedList` memiliki atribut private `head`, yang merupakan pointer ke node pertama di linked list.
- Konstruktor `LinkedList` diimplementasikan untuk menginisialisasi `head` menjadi `nullptr` (linked list kosong).
- Fungsi-fungsi dasar linked list diimplementasikan, seperti:
  - `tambahDepan`, `tambahBelakang`, dan `tambahTengah` untuk menambahkan node di depan, belakang, atau di tengah linked list.
  - `ubahDepan`, `ubahBelakang`, dan `ubahTengah` untuk mengubah data pada node pertama, terakhir, atau di tengah.
  - `hapusDepan`, `hapusBelakang`, dan `hapusTengah` untuk menghapus node pertama, terakhir, atau di tengah.
  - `hapusList` untuk menghapus seluruh linked list.
  - `tampilkan` untuk menampilkan isi linked list.

3. **Fungsi `main()`**
- Di dalam fungsi `main()`, program memulai dengan menampilkan judul program.
- Dalam sebuah loop `do-while`, program menampilkan menu operasi yang tersedia dan meminta pengguna untuk memilih operasi yang diinginkan.
- Setelah pengguna memilih operasi, program akan memanggil fungsi yang sesuai dari objek `linkedList` (objek dari kelas `LinkedList`).
- Loop akan berlanjut sampai pengguna memilih untuk keluar dari program dengan memilih opsi 0.

4. **Penutup**
- Program diakhiri dengan nilai kembali 0, menandakan bahwa program telah berakhir dengan sukses.

## Kesimpulan 
Berikut adalah kesimpulan mengenai materi Linkedlist yang sudah diberikan:
1. Single Linked List:
- Single Linked List adalah data structure yang terdiri dari node-node yang terhubung satu sama lain melalui pointer.
- Setiap node memiliki data dan pointer ke node berikutnya.
- Hanya dapat diakses dalam satu arah, yaitu dari node pertama (head) ke node terakhir (tail).
Circular Single Linked List adalah Single Linked List yang pointernya menunjuk pada dirinya sendiri, sehingga berputar.
- Tidak ada pointer yang menunjuk NULL.

2. Double Linked List:
- Double Linked List adalah linked list yang menggunakan pointer, dimana setiap node memiliki 3 field, yaitu next, prev, dan data.
- Double Linked List memiliki fleksibilitas yang lebih tinggi daripada Single Linked List dalam perpindahan pada list.
- Double Linked List dapat berupa circular (pointer prev dari elemen pertama menunjuk ke elemen terakhir) atau non-circular.

3. Circular Linked List:
- Circular List adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen.
- Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail.
- Pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL.
- Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

4. Double Linked List Non-Circular:
- Double Linked List Non-Circular adalah Double Linked List yang tidak mempunyai pointer prev yang menunjuk ke elemen sebelumnya.
- Setiap node pada linked list mempunyai field yang berisi data dan pointer ke node berikutnya.
- Dibutuhkan satu buah variabel untuk menyimpan pointer ke node pertama.

## Daftar Pustaka

[1] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2019.

[2] Felix Andreas Sutanto, Panduan Praktis Pemrograman Visual Berbasis C++, Yogyakarta;2021.

[3] Bambang Hariyanto, "Struktur Data", Bandung: Penerbit, 2020.

[4] R. Thareja, "Data structures using C", New Delhi: OXFOR, 2019.

[5] Thompson Susabda Ngoen, "Pengantar Algoritma dengan Bahasa C," Salemba Teknika, Jakarta, 2020.