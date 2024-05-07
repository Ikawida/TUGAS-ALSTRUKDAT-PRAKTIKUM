# <h1 align="center">Laporan Praktikum Modul 8 Queue</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori 

Queue merupakan salah satu implementasi dari Linked List. Queue merupakan kumpulan-kumpulan data yang menggunakan konsep FIFO (First In First Out), yaitu data yang paling pertama dimasukan ke dalam queue merupakan data yang pertama kali keluar dari queue [1].

Queue memiliki berbagai karakteristik, seperti Queue adalah struktur FIFO (First In First Out), dan operasi menghapus elemen terakhir dari Queue memerlukan penghapusan semua elemen yang dimasukkan sebelum elemen tersebut. Queue juga dapat didefinisikan sebagai daftar berurutan dari elemen-elemen dengan tipe data yang serupa, dengan operasi penyisipan item disebut enqueue dan penghapusan item disebut dequeue.

Implementasi queue dapat dilakukan dengan menggunakan array atau linked list.
Struktur data queue terdiri dari dua pointer yaitu front dan rear. Front/head adalah
pointer ke elemen pertama dalam queue dan rear/tail/back adalah pointer ke elemen
terakhir dalam queue [2]. 

Berikut adalah operasi-operasi yang terdapat dalam Queue yaitu:
- Enqueue, untuk menambahkan elemen ke akhir antrian.
- Dequeue, untuk menghapus elemen dari depan antrian.
- IsEmpty, untuk memeriksa ada tidaknya antrian kosong.
- IsFull, untuk memeriksa kepenuhan antrian.
- Peek, untuk mendaptkan nilai bagian depan antrian tanpa menghapusnya.
- Initialize, untuk membuat antrian baru tanpa elemen data.

Queue memiliki peran yang penting dalam berbagai aplikasi dan algoritma. Salah satu fungsi utamanya adalah mengatur dan mengelola antrean tugas atau operasi secara efisien. Dalam sistem komputasi, ia digunakan untuk menangani tugas-tugas seperti penjadwalan proses, antrean pesan, dan manajemen sumber daya.

Jenis-jenis Queue:
Jenis struktur data ini dapat diklasifikasikan berdasarkan cara implementasinya, maupun berdasarkan penggunaannya. Di antara jenis-jenis tersebut adalah sebagai berikut.

1. Berdasarkan Implementasinya
- Linear/Simple Queue: Pada jenis ini, elemen-elemen data disusun dalam barisan linear. Penambahan dan penghapusan elemen hanya terjadi pada dua ujung barisan tersebut. Analoginya seperti jejeran orang yang sedang menunggu antrean di supermarket, di mana orang pertama yang datang adalah yang pertama dilayani (First In, First Out). Pada struktur data ini, urutan pertama (data yang akan dikeluarkan) disebut Front atau Head, sedangkan data pada urutan terakhir (data yang baru saja ditambahkan) disebut Back, Rear, atau Tail [3].
- Circular Queue: Jenis ini mirip dengan linear queue, tetapi ujung-ujung barisan terhubung satu sama lain, menciptakan struktur antrean yang berputar. Circular queue berguna dalam situasi di mana kita ingin memanfaatkan kembali ruang yang telah digunakan setelah elemen-elemen tertentu dihapus [4].
2. Berdasarkan Penggunaan
- Priority Queue adalah struktur data khusus yang memungkinkan kita menyimpan elemen-elemen dengan nilai prioritas tertentu. Konsep dasar Priority Queue mirip dengan antrian biasa, namun perbedaannya adalah setiap elemen dalam Priority Queue memiliki nilai prioritas yang menentukan urutan elemen saat diambil. Elemen dengan nilai prioritas tertinggi akan diambil terlebih dahulu, bukan elemen yang paling lama berada dalam antrian [5].
- Double-ended Queue (Dequeue) adalah tipe struktur data yang mirip dengan queue dan stack, namun dengan kemampuan untuk menambahkan dan menghapus elemen di kedua ujungnya. Dalam deque, kita dapat menambahkan elemen baru baik di depan maupun di belakang, serta menghapus elemen dari depan dan belakang pula.

## Langkah Praktikum

### GUIDED 1

#### Kode Program
```c++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian koong" << endl;
    } else {
        for (int i = 0 ; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << "." << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian =" << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

#### Output

![Screenshot 2024-05-07 120135](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/64a7b3b8-9552-40a0-8183-31c42f719eb7)

#### Interpretasi

 Program ini dimulai dengan mendefinisikan sebuah array `queueTeller` dengan ukuran maksimum yang telah ditentukan sebelumnya. Terdapat juga dua variabel `front` dan `back` yang menyimpan indeks dari elemen depan dan belakang antrian.

Terdapat beberapa fungsi dalam program ini. Pertama, fungsi `isFull()` dan `isEmpty()` digunakan untuk memeriksa apakah antrian sudah penuh atau kosong. Fungsi `enqueueAntrian(string data)` digunakan untuk menambahkan data ke dalam antrian. Jika antrian sudah penuh, pesan "Antrian penuh" akan ditampilkan. Fungsi `dequeueAntrian()` digunakan untuk menghapus elemen dari depan antrian. Fungsi `countQueue()` mengembalikan jumlah elemen dalam antrian, sementara fungsi `clearQueue()` mengosongkan seluruh antrian.

Fungsi `viewQueue()` digunakan untuk menampilkan isi dari antrian. Dalam fungsi `main()`, beberapa operasi dilakukan. Pertama, dua elemen ditambahkan ke dalam antrian menggunakan `enqueueAntrian()`, kemudian antrian tersebut ditampilkan bersama dengan jumlah elemennya menggunakan `viewQueue()` dan `countQueue()`. Kemudian, satu elemen dihapus dari depan antrian menggunakan `dequeueAntrian()`, dan antrian kembali ditampilkan. Selanjutnya, seluruh antrian dikosongkan menggunakan `clearQueue()` dan hasilnya ditampilkan. Program kemudian berakhir dengan nilai kembali 0 dari fungsi `main()`.

## Tugas Praktikum

### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list!

Jawab: 

#### Kode Program 
```c++
#include <iostream>
using namespace std;

// Node untuk merepresentasikan setiap elemen dalam linked list
struct Node {
    string data;
    Node* next;
};

// Class untuk merepresentasikan queue menggunakan linked list
class Queue {
private:
    Node* front; // Node depan dari queue
    Node* rear;  // Node belakang dari queue

public:
    // Constructor untuk menginisialisasi queue kosong
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Method untuk menambahkan elemen ke belakang queue
    void enqueue(string data) {
        // Membuat node baru
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        // Jika queue kosong, node baru menjadi front dan rear
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            // Menambahkan node baru di belakang queue
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Method untuk menghapus elemen dari depan queue
    void dequeue() {
        // Jika queue kosong, tidak ada yang dihapus
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }

        // Menyimpan node yang akan dihapus
        Node* temp = front;
        // Memindahkan front ke node berikutnya
        front = front->next;
        // Jika setelah penghapusan, queue menjadi kosong, rear juga harus diatur menjadi nullptr
        if (front == nullptr) {
            rear = nullptr;
        }
        // Menghapus node
        delete temp;
    }

    // Method untuk mengecek apakah queue kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Method untuk menampilkan isi dari queue
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        cout << "Data antrian teller:" << endl;
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    // Membuat objek dari class Queue
    Queue queue;

    // Menambahkan elemen ke dalam queue
    queue.enqueue("Andi");
    queue.enqueue("Maya");

    // Menampilkan isi queue
    queue.displayQueue();

    // Menghapus elemen dari depan queue
    queue.dequeue();

    // Menampilkan isi queue setelah penghapusan
    queue.displayQueue();

    return 0;
}
```

#### Output

![Screenshot 2024-05-07 120204](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/3ccd75d4-5c82-40bc-b200-9efef5738484)

#### Interpretasi

Program ini adalah implementasi sederhana dari struktur data antrian (queue) menggunakan linked list dalam bahasa pemrograman C++. Dalam struktur ini, setiap elemen antrian direpresentasikan sebagai node dalam linked list. Awalnya, program mendefinisikan struktur Node yang memiliki dua variabel anggota: data, yang menyimpan nilai dari setiap elemen antrian, dan next, yang merupakan pointer yang menunjuk ke node berikutnya dalam linked list. Kemudian, ada kelas Queue yang berfungsi sebagai wadah untuk linked list, dengan dua pointer yaitu front dan rear, yang menandai node depan dan belakang antrian. Metode enqueue() digunakan untuk menambahkan elemen baru ke belakang antrian, sedangkan dequeue() untuk menghapus elemen dari depan antrian. Terdapat juga metode isEmpty() untuk memeriksa apakah antrian kosong, dan displayQueue() untuk menampilkan isi antrian ke layar. Di dalam fungsi main(), objek dari kelas Queue dibuat, elemen-elemen ditambahkan ke antrian, dan kemudian operasi enqueue, dequeue, serta pengecekan kosongnya antrian dilakukan. Dengan menggunakan linked list, program ini memungkinkan penambahan dan penghapusan elemen dengan efisien di kedua ujung antrian.

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama Mahasiswa dan NIM Mahasiswa!

Jawab: 

#### Kode Program 
```c++
#include <iostream>
using namespace std;

// Node untuk merepresentasikan setiap elemen dalam linked list
struct Node {
    string nama;
    string nim;
    Node* next;
};

// Class untuk merepresentasikan queue menggunakan linked list
class Queue {
private:
    Node* front; // Node depan dari queue
    Node* rear;  // Node belakang dari queue

public:
    // Constructor untuk menginisialisasi queue kosong
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Method untuk menambahkan elemen ke belakang queue
    void enqueue(string nama, string nim) {
        // Membuat node baru
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        // Jika queue kosong, node baru menjadi front dan rear
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            // Menambahkan node baru di belakang queue
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Method untuk menghapus elemen dari depan queue
    void dequeue() {
        // Jika queue kosong, tidak ada yang dihapus
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }

        // Menyimpan node yang akan dihapus
        Node* temp = front;
        // Memindahkan front ke node berikutnya
        front = front->next;
        // Jika setelah penghapusan, queue menjadi kosong, rear juga harus diatur menjadi nullptr
        if (front == nullptr) {
            rear = nullptr;
        }
        // Menghapus node
        delete temp;
    }

    // Method untuk mengecek apakah queue kosong
    bool isEmpty() {
        return front == nullptr;
    }

    // Method untuk menampilkan isi dari queue
    void displayQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        cout << "Data antrian mahasiswa:" << endl;
        Node* temp = front;
        while (temp != nullptr) {
            cout << "Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
        }
    }
};

int main() {
    // Membuat objek dari class Queue
    Queue queue;

    // Menambahkan elemen ke dalam queue dengan atribut Nama Mahasiswa dan NIM Mahasiswa
    queue.enqueue("Ika", "2311110001");
    queue.enqueue("Ika", "2311110001");

    // Menampilkan isi queue
    queue.displayQueue();

    // Menghapus elemen dari depan queue
    queue.dequeue();

    // Menampilkan isi queue setelah penghapusan
    queue.displayQueue();

    return 0;
}
```

#### Output

![Screenshot 2024-05-07 120309](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/c64818d5-ab8e-4bd0-b925-1820c332e60c)

#### Interpretasi

 Struktur data antrian diatas digunakan untuk menyimpan data mahasiswa dengan atribut nama dan NIM. Dan berikut adalah interpretasi dari kode program yang digunakan dalam struktur data trsebut.

Setiap elemen dalam antrian direpresentasikan oleh sebuah node dalam linked list. Struktur `Node` memiliki dua string: `nama` untuk menyimpan nama mahasiswa dan `nim` untuk menyimpan NIM mahasiswa, serta pointer `next` yang menunjuk ke node berikutnya dalam antrian.

Kelas `Queue` memiliki dua pointer anggota, yaitu `front` yang menunjukkan ke node depan dalam antrian, dan `rear` yang menunjukkan ke node belakang dalam antrian. Kelas ini memiliki method untuk menambahkan elemen ke belakang antrian (`enqueue`), menghapus elemen dari depan antrian (`dequeue`), memeriksa apakah antrian kosong (`isEmpty`), dan menampilkan isi antrian(`displayQueue`).

Dalam `main()` program, sebuah objek `queue` dari kelas `Queue` dibuat. Kemudian, beberapa elemen ditambahkan ke antrian menggunakan method `enqueue`, dengan setiap elemen memiliki atribut nama dan NIM mahasiswa. Isi antrian kemudian ditampilkan menggunakan `displayQueue`. Salah satu elemen kemudian dihapus dari depan antrian menggunakan `dequeue`, dan isi antrian setelah penghapusan tersebut ditampilkan kembali.

Program ini menyediakan cara untuk mengantri dan mengelola data mahasiswa dengan atribut nama dan NIM dalam struktur data antrian menggunakan linked list.

## Kesimpulan 

Queue adalah struktur data yang mengatur elemen dalam urutan "first-in, first-out" (FIFO). Ini berarti elemen pertama yang dimasukkan ke dalam queue akan menjadi yang pertama untuk dikeluarkan. Misalnya, ketika mengantri di kasir, orang pertama yang mengantri akan dilayani terlebih dahulu sebelum yang lainnya. Queue juga memiliki beberapa operasi-operasi seperti Enqueue, Dequeue, IsEmpty,  IsFull, Peek, Initialize. 

Selain itu Queue juga dibedakan menjadi beberapa jenis yaitu pertama berdasarkan Implementasinya ada Linear/Simple Queue dan Circular Queue. Kedua ada berdasarkan Penggunaannya ada Priority Queue dan Double-ended Queue.

Queue memiliki peran yang penting dalam berbagai aplikasi dan algoritma. Salah satu fungsi utamanya adalah mengatur dan mengelola antrean tugas atau operasi secara efisien. Dalam sistem komputasi, ia digunakan untuk menangani tugas-tugas seperti penjadwalan proses, antrean pesan, dan manajemen sumber daya. Queue biasanya digunakan dalam berbagai aplikasi, seperti sistem antrian dan penjadwalan tugas dalam pemrograman.

## Daftar Pustaka

[1] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2019.

[2]  B. Firmansyah, “Implementasi Manajemen Bandwidth Dengan Metode Queue Tree Pada Pt. Cipta Banuata Anugrah Jakarta,” Tekinfo, vol. 21, no. 1, pp. 94–103,
2020.

[3]  D. Al Kautsar and L. Nulhakim, “Pengelolaan Management Bandwidth dengan Menggunakan Metode Simple Queue di Toko Subur Graphic Jakarta Pusat,”vol. VI, no. 2, pp. 63–70, 2020.

[4] P. Yanuar, “Analisis Paket Manajemen Bandwidth di Perusahaan Dengan Metode Simple Queue dan Quality Of Service”, JUKANTI, vol. 6, no. 1, pp. 11–18, Apr. 2023.

[5] A. Mahfuzi, D. Abdullah, U. Juhardi, M. Marhalim, dan R. Pallas, "Implementasi Metode PCQ – Queue Tree Pada Router Mikrotik Untuk Meningkatkan Quality Of Service Jaringan Internet Di Desa Renah Semanek," *J. Media Infotama*, vol. 19, no. 2, pp. 339-350, 2023.
