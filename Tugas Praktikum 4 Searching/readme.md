<h1 align="center">Laporan Praktikum Modul 4 Searching</h1>
<p align="center"> Nama: Ika Wida Nuragustin</p>
<p align="center"> NIM: 2311110001</p>
<p align="center"> Kelas: S1SD-04A</p>

## Dasar Teori 

Algoritma pencarian (searching) adalah serangkaian langkah atau prosedur yang digunakan untuk menemukan lokasi atau keberadaan suatu elemen atau nilai tertentu dalam kumpulan data. Tujuan utama dari algoritma pencarian adalah untuk menemukan apakah suatu nilai atau elemen ada dalam kumpulan data, dan jika iya, di mana letaknya.
Algoritma pencarian umumnya digunakan dalam berbagai aplikasi dan masalah komputasi, seperti pencarian elemen dalam database, pencarian kata dalam dokumen teks, atau pencarian jalur terpendek dalam graf.
Pencarian (searching) merupakan suatu pekerjaan yang 
sering dikerjakan dalam kehidupan sehari–hari.Tempat 
pencarian data dengan cara menelusur data-data tersebut. 
Tempat pencarian data dapat berupa array dalam memory 
(pencarian internal) [1]. 
Terdapat 2 metode pada algoritma Searching, yaitu:
1. Sequential Search 

Algoritma sequential searching yang biasanya disebut sebagai pendekatan pencarian secara beruntun merupakan pencarian yang diawali dari elemen awal sampai dengan elemen akhir secara beruntun hingga bisa menemukan elemen yang akan dikunjungi [2]. Algoritma ini mampu melakukan pencarian dengan array yang data-datanya tidak perlu melalui pengurutan 
data sebelumnya [3].
Algoritma pencarian yang paling sederhana yaitu metode pencarian beruntun (Sequential Search) nama lain algoritma pencarian beruntun 
adalah pencarian lurus (linear search). Algoritma pencarian beruntun adalah proses membandingkan setiap elemen larik satu persatu secara berurutan, mulai dari elemen pertama, sampai elemen yang dicari ditemukan atau seluruh elemen sudah habis diperiksa [4].

Adapun Proses Algoritma Sequential Searching adalah sebagai berikut:

(1) Pertama data melakukan perbandingan satu per satu secara berurutan dalam kumpulan data dengan data yang dicari sampai data tersebut ditemukan atau tidak ditemukan. 
    
(2) Pada dasarnya, pencarian ini hanya melakukan pengulangan data dari 1 sampai dengan jumlah data (n). 
    
(3) Setiap pengulangan, dibandingkan data ke-i dengan data yang sedang dicari.
    
(4) Apabila data sama dengan yang dicari, berarti data telah berhasil di temukan. Sebaliknya apabila sampai akhir melakukan pengulangan tidak ada data yang sama dengan yang dicari, berarti data tidak ada yang ditemukan.

Urutan Algoritma Sequential Searching:
a. i <- 0 

b. Ketemu <- false 

c. Selama ( tidak ketemu ) dan ( i < n ) kerjakan baris 4 

d. Jika ( data[i] = key ) maka ketemu <- true jika tidak i <- i + 1 

e. Jika ( ketemu ) maka i adalah indeks dari data yang dicari

2. Binary Search 

Binary Search adalah cara untuk pencarian 
data pada array yang sudah terurut, karena 
salah satu syarat dalam Binary Search adalah 
data sudah dalam keadaan terurut. Dengan 
kata lain apabila data belum dalam keadaan 
terurut, pencarian Binary tidak dapat dilakukan. 
Binary Search ini dilakukan untuk: 

a. Memperkecil jumlah operasi perbandingan 
yang harus dilakukan antara data yang dicari 
dengan data yang ada didalam tabel, 
khususnya untuk jumlah data yang sangat 
besar ukurannya. 

b. Beban komputasi lebih kecil karena 
pencarian dilakukan dari depan, belakang 
dan tengah. 

c. Prinsip dasarnya adalah melakukan proses 
pembagian ruang pencarian secara 
berulang-ulang sampai data ditemukan atau 
sampai pencarian tidak dapat dibagi lagi 
(berarti terdapat kemungkinan data tidak 
ditemukan) [4].

Binary search merupakan salah satu 
algoritma pencarian pada array yang sudah 
terurut. Hal yang terpenting dalam penggunaan
binary search adalah data harus sudah 
diurutkan. Untuk mengefisienkan penggunaan 
binary search maka informasi bagaimana 
integer dalam array harus diketahui. Adapun ide 
dasar binary search yaitu memulai pencarian 
dengan cara membagi dua ruang pencarian (T). 
Prosedur algoritma binary search yaitu :
1. L > R, Jika L lebih besar dari pada R maka 
proses pencarian gagal. Menentukan 
median dari array (L+R) / 2
2. Jika A[middle] < T, maka pencarian akan 
dilakukan hanya pada sisi kanan dari 
A[middle] saja
3. Jika A[middle] > T, maka pencarian akan 
dilakukan hanya pada sisi kiri dari A[middle] 
saja 4. Jika A[middle] = T, maka pencarian 
selesai [5].

## Langkah Praktikun 

### Guided 1
#### Kode Program 
```C++
// sequential search 

# include <iostream>

using namespace std;

int main() { 
    int n = 10;
    int data[n] = {9,4,1,7,5,12,4,13,4,10};
    int cari = 10;
    bool ketemu = false;
    int i;

    //algoritma sequential search
    for (i = 0; i < n; i++) {
        if(data[i] == cari) {
            ketemu = true;
            break;
        
        }
    }
    cout << "\t Program sequential search sederhana \n" << endl;
    cout << "data: {9,4,1,7,5,12,4,23,4,10}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data" << endl;
    }
    return 0;
}
```
#### Output

<img width="960" alt="Screenshot 2024-04-02 103553" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/56c1b5d5-cd76-464e-b20f-4bed68b21935">

#### Interpretasi

Berikut adalah penjelasan mengenai kode program yang digunakan dalam program tersebut: 
- int n = 10;: Variabel n digunakan untuk menentukan jumlah elemen dalam array data.
- int data[n] = {9,4,1,7,5,12,4,13,4,10};: Array data berisi serangkaian bilangan bulat yang akan dicari.
- int cari = 10;: Variabel cari menyimpan nilai yang akan dicari dalam array data.
- bool ketemu = false;: Variabel ketemu digunakan untuk menandai apakah angka yang dicari telah ditemukan atau tidak. Awalnya diatur sebagai false.
- int i;: Variabel i digunakan sebagai indeks untuk iterasi.
- Algoritma Sequential Search:
1. Program melakukan iterasi melalui setiap elemen dalam array data menggunakan loop for.
Setiap elemen dalam array data dicek apakah sama dengan nilai yang dicari (cari).
2. Jika ditemukan, variabel ketemu diatur sebagai true dan program keluar dari loop menggunakan pernyataan break.
- Menampilkan Data dan Hasil Pencarian:
Program menampilkan data yang ada dalam array data.
Berdasarkan nilai variabel ketemu, program menampilkan hasil pencarian apakah nilai yang dicari ditemukan atau tidak, beserta indeksnya jika ditemukan.

Dan berikut adalah cara kerja dari program tersebut: 
- Program menginisialisasi array data yang berisi serangkaian bilangan bulat.
- Program kemudian menentukan nilai yang ingin dicari, yaitu nilai cari.
- Selanjutnya, program melakukan pencarian berurutan melalui setiap elemen array data dengan menggunakan loop for.
Pada setiap iterasi, program membandingkan nilai dari elemen saat ini dengan nilai yang dicari (cari).
- Jika nilai yang dicari ditemukan, program mengatur variabel ketemu menjadi true dan keluar dari loop.
- Setelah selesai melakukan pencarian, program menampilkan data yang ada dalam array data, serta hasil pencarian apakah nilai yang dicari ditemukan atau tidak.
- Jika nilai yang dicari ditemukan, program juga menampilkan indeks di mana nilai tersebut ditemukan dalam array data.

#### Kompleksitas Ruang dan Waktu

1. Kompleksitas Waktu:
- Iterasi Melalui Data: Program melakukan iterasi melalui setiap elemen dalam array data. Jumlah iterasi ini bergantung pada ukuran array, yaitu n, di mana n adalah jumlah elemen dalam array.
Kompleksitas waktu iterasi: O(n)
- Pencarian: Dalam setiap iterasi, program membandingkan nilai elemen saat ini dengan nilai yang dicari. Operasi ini memiliki kompleksitas waktu konstan, yaitu O(1), karena hanya melibatkan perbandingan sederhana antara dua nilai.
- Pengaturan Variabel: Jika nilai yang dicari ditemukan, program mengatur variabel ketemu menjadi true dan keluar dari loop menggunakan pernyataan break. Operasi ini juga memiliki kompleksitas waktu konstan, yaitu O(1).
Dengan demikian, total kompleksitas waktu dari program adalah 
O(n), di mana n adalah jumlah elemen dalam array data. Hal ini disebabkan oleh iterasi melalui setiap elemen dalam array.

2. Kompleksitas Ruang:
- Array Data: Program menggunakan ruang yang sebanding dengan jumlah elemen dalam array data, yaitu O(n), di mana n adalah jumlah elemen dalam array.
- Variabel Lainnya: Program menggunakan sejumlah variabel tambahan seperti n, cari, ketemu, dan i. Ruang yang digunakan oleh variabel ini tidak bergantung pada ukuran array, sehingga kompleksitas ruangnya dapat diabaikan atau dianggap konstan, yaitu O(1).
Jadi, total kompleksitas ruang dari program ini adalah O(n), di mana n adalah jumlah elemen dalam array data.

### Guided 2
#### Kode Program
```C++
// Binary Search

# include <iostream>
# include <conio.h>
# include <iomanip>

using namespace std;

int cari;

void selection_sort(int data[], int length) {
    int temp, min, i, j;
    for(i=0; i < length; i++) {
        min = i;
        for(j = i + 1; j < length; j++) {
            if(data[j] < data[min]) { 
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}
void binarysearch(int data[], int length) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = length - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(data[tengah] < cari) {
            b_flag = 1;
            break;
        } else if(data[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah + 1;
    }
    if(b_flag == 1)
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    else 
        cout << "\n Data tidak ditemukan\n";
}

int main() {
    int data[7] = {1,8,2,5,4,9,7};
    int length = sizeof(data) / sizeof(data[0]);

    cout << "\t BINARY SEARCH" << endl;
    cout << "|n Data :";

    // Tampilkan data awal
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\n Masukkan data yang ingin anda cari : ";
    cin >> cari;

    cout << "\n Data diurutkan : ";

    // Urutkan data dengan selesction sort
    selection_sort(data, length);

    // Tampilkan data setelah diurutkan 
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binarysearch(data, length);
    _getche();
    return EXIT_SUCCESS;
}
``` 
#### Output

<img width="960" alt="Screenshot 2024-04-02 103821" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/0750ea7c-e6f7-46dc-bb6e-fcb9cd029792">

#### Interpretasi 

Berikut adalah penjelasan mengenai kode program yang digunakan dalam program tersebut:
- Header Files: Program menggunakan beberapa pustaka, yaitu <iostream> untuk input-output standar, <conio.h> untuk fungsi _getche(), dan <iomanip> untuk pengaturan tata letak output.
- Variabel Global: Variabel cari digunakan untuk menyimpan nilai yang akan dicari dalam array.
- Fungsi selection_sort: Fungsi ini digunakan untuk mengurutkan array menggunakan algoritma selection sort. Ini akan digunakan sebelum pencarian biner untuk memastikan array terurut.
- Fungsi binarysearch: Fungsi ini melakukan pencarian biner dalam array yang telah diurutkan. Itu akan menentukan apakah elemen yang dicari ada dalam array atau tidak.
- Main Function:
1. Variabel data adalah array yang berisi data yang akan dicari.
2. Variabel length adalah jumlah elemen dalam array data.
3. Program menampilkan data awal, meminta pengguna untuk memasukkan data yang ingin dicari, dan menampilkan data setelah diurutkan.
4. Kemudian, program memanggil fungsi binarysearch untuk melakukan pencarian biner pada data yang telah diurutkan.
- Program kemudian menunggu agar pengguna menekan tombol sebelum keluar dari program menggunakan fungsi _getche().

Dan berikut adalah cara kerja dari program tersebut: 
Algoritma ini mencari sebuah nilai dalam kumpulan data yang telah diurutkan dengan cara membagi-bagi kumpulan data menjadi dua bagian secara berulang hingga nilai yang dicari ditemukan atau tidak ditemukan.
- Program pertama-tama mendefinisikan array data yang berisi serangkaian bilangan bulat yang akan dicari.
- Program meminta pengguna untuk memasukkan nilai yang ingin dicari dalam array data.
- Kemudian, program mengurutkan data menggunakan algoritma selection sort. Pemrosesan ini dilakukan untuk memastikan bahwa data terurut sebelum melakukan pencarian biner.
- Setelah data diurutkan, program menampilkan data awal sebelum diurutkan dan data setelah diurutkan ke layar.
- Selanjutnya, program memanggil fungsi binarysearch untuk melakukan pencarian biner dalam data yang telah diurutkan.
- Fungsi binarysearch melakukan pencarian biner dengan membagi kumpulan data menjadi dua bagian dan memeriksa apakah nilai yang dicari ada di bagian kiri atau kanan dari titik tengah array. Proses ini terus berlanjut hingga nilai yang dicari ditemukan atau tidak ditemukan.
- Hasil dari pencarian, yaitu apakah nilai yang dicari ditemukan atau tidak, ditampilkan ke layar bersama dengan indeks di mana nilai tersebut ditemukan jika ditemukan.

#### Kompleksitas Ruang dan Waktu

1. Kompleksitas Waktu:
- Selection Sort: Sebelum melakukan pencarian biner, program melakukan pengurutan array menggunakan algoritma selection sort. Waktu yang dibutuhkan untuk selection sort adalah O(n^2), di mana n adalah jumlah elemen dalam array.
- Binary Search: Setelah array diurutkan, program melakukan pencarian biner. Kompleksitas waktu pencarian biner adalah 
O(log n), di mana n adalah jumlah elemen dalam array yang telah diurutkan.
Total kompleksitas waktu dari program adalah O(n^2) untuk selection sort dan O(logn) untuk binary search. Namun, karena kompleksitas waktu selection sort yang lebih dominan, maka kompleksitas waktu keseluruhan program adalah 
O(n^2).

2. Kompleksitas Ruang:
- Array Data: Program menggunakan ruang yang sebanding dengan jumlah elemen dalam array data, yaitu O(n), di mana n adalah jumlah elemen dalam array.
- Variabel Lainnya: Program menggunakan sejumlah variabel tambahan, seperti cari, temp, min, awal, akhir, tengah, dan b_flag, yang hanya memerlukan ruang konstan, yaitu O(1).
Total kompleksitas ruang dari program ini adalah O(n), di mana n adalah jumlah elemen dalam array data.

## Tugas Praktikum 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

#### Kode Program 
```C++
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
```

#### Output

<img width="960" alt="Screenshot 2024-04-02 104021" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/c90c6eef-7f96-4d2d-bb5d-bcb785d3944d">

#### Interpretasi 

Program ini adalah sebuah program dalam bahasa C++ yang bertujuan untuk mencari sebuah huruf dalam sebuah kalimat menggunakan algoritma binary search.
Berikut adalah penjelasan mengenai kode program yang digunakan dalam program tersebut: 
- Header Files: Digunakan untuk mengimpor pustaka yang diperlukan. Dalam hal ini, kita membutuhkan iostream untuk input-output, algorithm untuk fungsi sort, dan string untuk menggunakan tipe data string.
- Namespace: using namespace std; digunakan agar tidak perlu menulis std:: sebelum fungsi atau objek standar yang digunakan.
- Fungsi Binary Search: binary_search menerima string arr dan karakter target, lalu melakukan pencarian biner pada string untuk mencari karakter target. Mengembalikan indeks karakter jika ditemukan, dan -1 jika tidak.
- Fungsi Mencari Huruf dalam Kalimat: find_letter menerima string sentence (kalimat) dan karakter letter (huruf yang dicari). Mengurutkan kalimat menggunakan fungsi sort, lalu memanggil binary_search untuk mencari huruf dalam kalimat yang sudah diurutkan. Mengembalikan pesan yang sesuai tergantung pada apakah huruf tersebut ditemukan atau tidak.
- Fungsi Utama (main): Input kalimat dan huruf yang ingin dicari. Mengubah huruf yang ingin dicari menjadi huruf kecil menggunakan tolower. Memanggil find_letter untuk mencari huruf dalam kalimat, dan menampilkan hasil pencarian.

Dan berikt adalah cara kerja dari program tersebut:
- Pertama, program akan meminta pengguna untuk memasukkan sebuah kalimat dan huruf yang ingin dicari.
- Kalimat yang dimasukkan oleh pengguna akan diurutkan secara alfabetis menggunakan fungsi sort dari pustaka algorithm.
- Kemudian, program akan mencari huruf yang dimasukkan oleh pengguna dalam kalimat yang telah diurutkan menggunakan algoritma binary search.
- Jika huruf tersebut ditemukan dalam kalimat, program akan memberikan output berupa indeks di mana huruf tersebut ditemukan dalam kalimat tersebut.
- Jika huruf tersebut tidak ditemukan dalam kalimat, program akan memberikan pesan bahwa huruf tersebut tidak ditemukan.

#### Kompleksitas Ruang dan Waktu 

1. Kompleksitas Waktu:
- Sorting Kalimat: Sebelum melakukan pencarian biner, kalimat harus diurutkan terlebih dahulu. Kompleksitas waktu untuk sorting menggunakan algoritma quicksort atau mergesort adalah O(n log n), di mana n adalah panjang kalimat.
- Pencarian Biner: Setelah kalimat diurutkan, dilakukan pencarian biner untuk mencari huruf yang diminta. Kompleksitas waktu pencarian biner adalah O(log n), di mana n adalah panjang kalimat.
Dengan demikian, total kompleksitas waktu dari program adalah O(n log n), di mana n adalah panjang kalimat. Meskipun pencarian biner itu sendiri berjalan pada kompleksitas waktu O(log n), namun proses pengurutan kalimat dengan kompleksitas O(n log n) memiliki dampak yang lebih besar pada total kompleksitas waktu program.

2. Kompleksitas Ruang:
- String Kalimat: Program menggunakan ruang yang sebanding dengan panjang kalimat yang dimasukkan oleh pengguna, yaitu O(n), di mana n adalah panjang kalimat.
- Variabel Tambahan: Program menggunakan sejumlah variabel tambahan, seperti variabel low, high, mid, index, dan hasil. Namun, jumlah variabel ini tidak bergantung pada panjang kalimat, sehingga kompleksitas ruang tambahan tersebut bisa diabaikan atau dianggap konstan, yaitu O(1).
Dengan demikian, total kompleksitas ruang dari program adalah O(n), di mana n adalah panjang kalimat.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

#### Kode Program 
```C++
#include <iostream> // Library untuk input-output standar
#include <string>   // Library untuk penggunaan tipe data string
#include <unordered_map> // Library untuk menggunakan struktur data unordered_map

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam kalimat
unordered_map<char, int> count_vowels(string sentence) {
    unordered_map<char, int> vowel_count; // Inisialisasi jumlah huruf vokal
    int total_vowels = 0; // Inisialisasi jumlah total huruf vokal
    // Loop untuk setiap karakter dalam kalimat
    for (char& c : sentence) {
        // Mengecek apakah karakter adalah huruf vokal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count[c]++; // Jika huruf vokal, tambahkan satu ke jumlah vokal
            total_vowels++; // Tambahkan satu ke jumlah total huruf vokal
        }
    }
    // Simpan jumlah total huruf vokal ke dalam unordered_map dengan kunci '_'
    vowel_count['_'] = total_vowels;
    return vowel_count; // Mengembalikan jumlah huruf vokal
}

int main() {
    string kalimat; // Variabel untuk menyimpan kalimat yang dimasukkan pengguna
    // Meminta pengguna untuk memasukkan kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat); // Menggunakan getline untuk memasukkan kalimat dengan spasi

    // Memanggil fungsi count_vowels untuk menghitung jumlah huruf vokal dalam kalimat
    unordered_map<char, int> jumlah_vokal = count_vowels(kalimat);

    // Menampilkan jumlah huruf vokal yang telah dihitung
    cout << "Rincian jumlah huruf vokal dalam kalimat tersebut adalah:" << endl;
    for (const auto& pair : jumlah_vokal) {
        // Jika kunci adalah '_', cetak jumlah total huruf vokal
        if (pair.first == '_') {
            cout << "Total: " << pair.second << endl;
        } else {
            cout << "Huruf " << pair.first << " ada " << pair.second << endl;
        }
    }

    return 0;
}
```

#### Output

<img width="960" alt="Screenshot 2024-04-02 104601" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/123a2789-960a-4967-9bfd-0d4d6539d442">

#### Interpretasi 
Program ini bertujuan untuk menghitung jumlah huruf vokal dalam sebuah kalimat yang dimasukkan oleh pengguna.
Berikut adalah penjelasan mengenai kode program yang digunakan dalam program tersebut:
- Header Files: Program menggunakan dua pustaka, yaitu iostream untuk input-output standar dan string untuk menggunakan tipe data string.
- Namespace: Digunakan using namespace std; agar tidak perlu menulis std:: sebelum fungsi atau objek standar yang digunakan.
- Fungsi count_vowels: Ini adalah fungsi yang menerima sebuah kalimat sebagai argumen dan mengembalikan jumlah huruf vokal dalam kalimat tersebut. Fungsi ini menggunakan loop for untuk mengiterasi setiap karakter dalam kalimat, dan jika karakter tersebut adalah huruf vokal, maka variabel vowel_count akan ditambah satu.
- Fungsi main: Pada fungsi utama (main), program meminta pengguna untuk memasukkan sebuah kalimat menggunakan getline dan menyimpannya dalam variabel kalimat. Kemudian, fungsi count_vowels dipanggil dengan mengirimkan kalimat yang dimasukkan oleh pengguna sebagai argumen. Hasil jumlah huruf vokal yang dikembalikan oleh fungsi tersebut kemudian ditampilkan ke layar.

Dan berikut adalah cara kerja dari program tersebut:
- Program meminta pengguna untuk memasukkan sebuah kalimat.
- Kalimat yang dimasukkan oleh pengguna disimpan dalam variabel kalimat.
- Program memanggil fungsi count_vowels dengan mengirimkan kalimat yang dimasukkan oleh pengguna sebagai argumen.
- Fungsi count_vowels melakukan iterasi pada setiap karakter dalam kalimat dan menghitung jumlah huruf vokal yang ditemukan.
- Setelah selesai menghitung, fungsi tersebut mengembalikan jumlah huruf vokal yang telah dihitung.
- Nilai yang dikembalikan oleh fungsi count_vowels disimpan dalam variabel jumlah_vokal.
- Program menampilkan jumlah huruf vokal yang telah dihitung ke layar dan menampilkan rincian dari huruf vokal tersebut (huruf besar dan kecil ada perbedaan).
Dengan demikian, program ini memberikan informasi kepada pengguna tentang jumlah huruf vokal dalam kalimat yang dimasukkan.

#### Kompleksitas Ruang dan Waktu 

1. Kompleksitas Waktu:
- Iterasi Karakter: Program melakukan iterasi pada setiap karakter dalam kalimat untuk mengecek apakah karakter tersebut adalah huruf vokal atau bukan. Kompleksitas waktu iterasi ini adalah O(n), di mana n adalah panjang kalimat.
- Penambahan ke Jumlah Vokal: Ketika sebuah huruf vokal ditemukan, program menambahkan satu ke jumlah vokal. Operasi ini memiliki kompleksitas waktu konstan, yaitu O(1), karena hanya melibatkan penambahan satu ke variabel yang menyimpan jumlah vokal.
- Pengembalian Nilai: Setelah selesai menghitung jumlah huruf vokal, program mengembalikan nilai tersebut. Operasi pengembalian nilai ini juga memiliki kompleksitas waktu konstan, yaitu O(1).
Jadi, total kompleksitas waktu dari program adalah O(n), di mana n adalah panjang kalimat. Ini karena iterasi pada setiap karakter dalam kalimat adalah yang paling dominan dalam hal kompleksitas waktu.

2. Kompleksitas Ruang:
- Variabel Kalimat: Program menggunakan ruang yang sebanding dengan panjang kalimat yang dimasukkan oleh pengguna, yaitu O(n), di mana n adalah panjang kalimat.
- Variabel Tambahan: Program menggunakan beberapa variabel tambahan, seperti vowel_count, yang hanya membutuhkan ruang konstan, yaitu O(1).
Jadi, total kompleksitas ruang dari program ini adalah O(n), di mana n adalah panjang kalimat.

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

#### Kode Program 
```C++
#include <iostream>  // Library untuk input-output standar
#include <vector>    // Library untuk menggunakan tipe data vector

using namespace std;

// Fungsi untuk melakukan pencarian berurutan (sequential search)
int sequential_search(vector<int> data, int target) {
    int count = 0;  // Variabel untuk menyimpan jumlah angka 4 yang ditemukan
    // Loop untuk setiap elemen dalam data
    for (int number : data) {
        // Mengecek apakah elemen tersebut adalah angka 4
        if (number == target) {
            count++;  // Jika ya, tambahkan satu ke jumlah angka 4 yang ditemukan
        }
    }
    return count;  // Mengembalikan jumlah angka 4 yang ditemukan
}

int main() {
    // Mendefinisikan vektor yang berisi data bilangan bulat
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;  // Nilai yang ingin dicari dalam data

    // Memanggil fungsi sequential_search untuk mencari jumlah angka 4 dalam data
    int jumlah_angka_4 = sequential_search(data, target);

    // Menampilkan jumlah angka 4 yang ditemukan
    cout << "Jumlah angka 4 dalam data adalah: " << jumlah_angka_4 << endl;

    return 0;
}
```

#### Output

<img width="960" alt="Screenshot 2024-04-02 105013" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/1b4f9934-c2f9-4059-96f0-c510200a1bd6">

#### Interpretasi 

Program tersebut bertujuan untuk menghitung berapa banyak angka 4 yang terdapat dalam data yang diberikan menggunakan algoritma Sequential Search. 
Berikut adalah penjelasan mengenai kode program yang digunakan dalam program tersebut:
- Header Files: Program menggunakan dua pustaka, yaitu <iostream> untuk input-output standar dan <vector> untuk menggunakan tipe data vector.
- Namespace: Digunakan using namespace std; agar tidak perlu menulis std:: sebelum fungsi atau objek standar yang digunakan.
- Fungsi sequential_search: Ini adalah fungsi yang menerima sebuah vektor data dan nilai target yang ingin dicari. Fungsi ini melakukan iterasi pada setiap elemen dalam vektor data dan menghitung berapa kali nilai target ditemukan. Setiap kali nilai target ditemukan, variabel count akan ditambah satu.
- Fungsi main: Pada fungsi utama (main), kita mendefinisikan vektor data yang berisi data bilangan bulat dan nilai target yang ingin dicari. Kemudian, kita memanggil fungsi sequential_search dengan mengirimkan vektor data dan nilai target sebagai argumen. Hasil jumlah angka 4 yang dikembalikan oleh fungsi tersebut kemudian ditampilkan ke layar.

Dan berikut adalah cara kerja dari program tersebut: 
- Program pertama-tama mendefinisikan sebuah vektor (vector<int> data) yang berisi serangkaian bilangan bulat yang disediakan.
- Kemudian, program memanggil fungsi sequential_search dengan menyertakan vektor data dan angka target (dalam hal ini angka 4) sebagai argumen. Fungsi ini akan melakukan pencarian berurutan melalui setiap elemen dalam vektor data untuk mencari angka 4.
- Di dalam fungsi sequential_search, setiap kali angka 4 ditemukan, variabel count akan bertambah satu.
- Setelah selesai melakukan pencarian, fungsi sequential_search akan mengembalikan nilai count, yang merupakan jumlah angka 4 yang ditemukan dalam data.
- Program utama kemudian menampilkan jumlah angka 4 yang ditemukan ke layar.
Dengan demikian, program ini memberikan informasi kepada pengguna tentang berapa kali angka 4 muncul dalam data yang diberikan. 

#### Kompleksitas Ruang dan Waktu 

1. Kompleksitas Waktu:
- Iterasi melalui Data: Program melakukan iterasi pada setiap elemen dalam vektor data. Jumlah iterasi ini tergantung pada panjang vektor data, yang kita sebut dengan n, di mana n adalah jumlah elemen dalam data.
Kompleksitas waktu iterasi: O(n)
- Penambahan ke Jumlah Angka 4: Setiap kali program menemukan angka 4, program akan menambahkan satu ke variabel count. Operasi ini memiliki kompleksitas waktu konstan, yaitu O(1), karena hanya melibatkan penambahan satu ke variabel.
- Pengembalian Nilai: Setelah selesai melakukan iterasi, fungsi sequential_search mengembalikan nilai count. Operasi pengembalian nilai ini juga memiliki kompleksitas waktu konstan, yaitu O(1).
Dengan demikian, total kompleksitas waktu dari program adalah O(n), di mana n adalah jumlah elemen dalam data. 

2. Kompleksitas Ruang:
- Variabel Data: Program menggunakan ruang yang sebanding dengan jumlah elemen dalam vektor data, yaitu O(n), di mana n adalah jumlah elemen dalam data.
- Variabel Tambahan: Program menggunakan beberapa variabel tambahan, seperti count, yang hanya membutuhkan ruang konstan, yaitu O(1).
Jadi, total kompleksitas ruang dari program ini adalah O(n), di mana n adalah jumlah elemen dalam data.

## Kesimpulan 

berdasarkan praktikum dan juga tugas yang diberikan dapat ditarik kesimpulan mengenai algoritma pencarian (searching) sebagai berikut:
1. Sequential Search:
- Algoritma pencarian sederhana yang cocok digunakan untuk kumpulan data yang tidak terlalu besar dan tidak terurut.
- Kompleksitas waktu dari sequential search adalah O(n), di mana n adalah jumlah elemen dalam kumpulan data.
- Tidak memerlukan kumpulan data yang terurut, namun tidak efisien untuk kumpulan data besar karena perlu memeriksa setiap elemen.
2. Binary Search:
- Algoritma pencarian yang efisien untuk kumpulan data yang telah diurutkan.
- Menggunakan konsep pembagian dan pengecekan pada bagian tengah untuk mencari nilai yang dicari.
- Kompleksitas waktu dari binary search adalah O(logn), di mana n adalah jumlah elemen dalam kumpulan data.
- Tidak cocok digunakan untuk kumpulan data yang tidak terurut karena membutuhkan kumpulan data yang telah diurutkan terlebih dahulu.
3. Kompleksitas Waktu dan Ruang:
- Sequential search memiliki kompleksitas waktu O(n) dan kompleksitas ruang O(1).
- Binary search memiliki kompleksitas waktu O(logn) dan kompleksitas ruang O(1).
- Pemilihan algoritma pencarian yang tepat tergantung pada sifat kumpulan data dan kebutuhan aplikasi.
4. Pertimbangan:
- Jika kumpulan data telah diurutkan, binary search akan menjadi pilihan yang lebih efisien.
- Jika kumpulan data tidak terurut atau ukuran data tidak terlalu besar, sequential search dapat menjadi pilihan yang lebih sederhana.

Dengan memahami karakteristik dan kompleksitas dari masing-masing algoritma pencarian, kita dapat memilih algoritma yang paling sesuai dengan kebutuhan dan kondisi kumpulan data yang akan diolah.

## Daftar Pustaka

[1] R. Toyib, Y. Darnita dan A. R. Sutra Deva. "Penerapan Algoritma Binary Search Pada Aplikasi E-Order." Jurnal Media Infotama, Vol.17, no. 1, Feb. 2021.

[2] P. Wahyuningsih and N. Mustika, “Sistem informasi lokasi sejarah pahlawan Sulawesi Selatan menggunakan Algoritma Sequential Search berbasis Android.” Jurnal Electro Luceat, vol. 6, no. 2, pp. 266–273, Nov.2020.

[3] N. Chafid and S. Alfian, “Penerapan Algoritma Pencarian Sequential pada aplikasi kamus tiga Bahasa Indonesia-Jawa-Jawa Banten,” Jurnal Satya Informatika. Vol. 4 No. 1, pp. 53–62, May 2019.

[4] Y. Religia, “Analisis Algoritma Sequential 
Search Dan Binary Search Pada Big Data,” 
Jurnal Ilmiah Informatika,Arsitektur dan Lingkungan.vol. 14, no. 1, pp. 74–79, 2019.

[5] R. Kurniawan and S. Marhamelda, “Sistem 
Pengolahan Data Peserta Didik Pada LKP,” 
Jurnal Informatika Manajemen dan Komputer. vol. 11, no. 1, pp. 37–45, 2019.


