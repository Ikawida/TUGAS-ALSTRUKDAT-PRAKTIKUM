# <h1 align="center">Laporan Praktikum Modul 12 Graph dan Tree</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori 

A. GRAPH

Graph adalah jenis struktur data umum yang susunan datanya tidak berdekatan satu sama lain (non-linier). Graph terdiri dari kumpulan simpul berhingga untuk menyimpan data, dan antara dua buah simpul terdapat hubungan saling keterkaitan. Simpul pada graph disebut dengan verteks (V), sedangkan sisi yang menghubungkan antar verteks disebut edge (E). Pasangan (x,y) disebut sebagai edge, yang menyatakan bahwa simpul x terhubung ke simpul y. Graph adalah istilah yang digunakan untuk menggambarkan suatu struktur matematika yang terdiri dari titik (vertex) dan sisi (edge). Graf dapat berupa graf sederhana, graf lengkap, graf berarah, atau graf yang memiliki sifat-sifat lainnya. Graf digunakan untuk mempresentasikan objek-objek diskrit dan memodelkan hubungan antara mereka [1].  

Graf dibedakan menjadi beberapa jenis sebagai beriku:

1. Directed Graph 

Graph berarah (juga dikenal sebagai directed graph atau digraph) adalah jenis struktur data yang memiliki arah pada setiap tepinya. Ini mengindikasikan adanya aliran atau orientasi antara simpul-simpul. Dalam graf berarah, urutan simpul dalam sebuah busur memiliki arti. Misalnya, jika terdapat busur dari simpul A ke simpul B, maka busur tersebut tidak sama dengan busur dari simpul B ke simpul A [2]. Dengan kata lain, urutan pasangan simpul sangat diperhatikan dalam graf berarah.

Graf berarah (directed graph) adalah graf yang memiliki arah pada setiap sisi. Setiap sisi memiliki simpul awal dan simpul tujuan. Graf ini menunjukkan hubungan antara simpul dengan arah tertentu. Dalam graf berarah, setiap sisi menghubungkan dua simpul, dan arahnya menunjukkan urutan dari simpul awal ke simpul tujuan.

Misalnya, jika kita memiliki dua simpul A dan B, dan terdapat sisi dari A ke B, maka kita dapat mengatakan bahwa ada hubungan dari A ke B. Namun, tidak ada hubungan dari B ke A, kecuali ada sisi kembali (loop) dari B ke A.

Graf berarah sering digunakan dalam berbagai bidang, termasuk ilmu komputer, matematika, dan ilmu sosial. Contoh penggunaan graf berarah meliputi:
- Representasi jaringan sosial, di mana simpul mewakili individu dan sisi mewakili hubungan antara individu-individu tersebut.
- Representasi aliran data dalam program komputer, di mana simpul mewakili langkah-langkah atau proses, dan sisi mewakili aliran data antara langkah-langkah tersebut.
- Analisis jaringan transportasi, di mana simpul mewakili lokasi (misalnya kota atau pelabuhan) dan sisi mewakili jalur transportasi antara lokasi-lokasi tersebut.

2. Undirected Graph

Response stopped
Undirected graph (juga dikenal sebagai non-directed graph) adalah jenis struktur data yang memiliki simpul-simpul yang terhubung dengan edge yang tidak memiliki arah tertentu. Mari kita bahas lebih lanjut:

Simpul (Vertices): Simpul pada undirected graph disebut juga vertices (V). Setiap simpul mewakili entitas atau objek tertentu.

Edge: Edge (E) menghubungkan dua buah simpul. Edge pada undirected graph bersifat dua arah, artinya jika ada edge yang menghubungkan simpul A dan B, maka kita dapat berpindah dari A ke B atau sebaliknya tanpa memperhatikan arah tertentu.

Contoh: Misalkan kita memiliki undirected graph dengan 4 simpul (V = {0, 1, 2, 3}) dan 4 pasang edge (E = {(0,1), (0,2), (0,3), (1,2)}). Graf ini dapat direpresentasikan sebagai berikut:

V = {0, 1, 2, 3}

E = {(0,1), (0,2), (0,3), (1,2)}

Contoh Undirected Graph Dalam contoh di atas, kita memiliki 4 simpul (0, 1, 2, dan 3) yang terhubung oleh 4 edge. Simpul-simpul ini dapat mewakili entitas apa pun, seperti pengguna dalam jejaring sosial atau objek lainnya.
Undirected graph banyak digunakan untuk merepresentasikan hubungan antara entitas dalam kehidupan nyata, seperti jejaring sosial (seperti Facebook, Instagram, LinkedIn) di mana pengguna dan hubungan pertemanan mereka dapat direpresentasikan sebagai simpul dan edge. Semua simpul dan edge ini membentuk jaringan yang saling terhubung.

3. Weight Graph

 Weighted graph adalah jenis graph yang cabangnya diberi label bobot berupa bilangan numerik. Pemberian label bobot pada edge biasanya digunakan untuk memudahkan algoritma dalam menyelesaikan masalah.

 Graf berberat (weighted graph) adalah jenis graf dalam teori graf di mana setiap edge (sisi) dari graf memiliki nilai bobot atau berat yang berhubungan dengannya. Bobot ini biasanya berupa bilangan yang bisa merepresentasikan berbagai atribut seperti jarak, biaya, kapasitas, atau durasi tergantung pada konteks masalah yang sedang diselesaikan [3]. Graf berberat digunakan dalam berbagai aplikasi seperti:

1. **Rute Terpendek**: Digunakan dalam algoritma seperti Dijkstra dan Bellman-Ford untuk menemukan jalur terpendek antara dua simpul dalam graf.
2. **Masalah Transportasi**: Mencari rute paling efisien dalam jaringan transportasi dengan bobot yang mungkin merepresentasikan jarak atau waktu tempuh.
3. **Pengoptimalan Jaringan**: Menentukan cara terbaik untuk menghubungkan jaringan dengan biaya minimum.
4. **Teori Jaringan**: Menganalisis jaringan sosial, komunikasi, atau listrik dengan bobot yang merepresentasikan kekuatan hubungan atau kapasitas.

Contoh sederhana dari graf berberat adalah graf yang merepresentasikan jaringan jalan di mana simpul-simpulnya adalah kota dan sisi-sisinya adalah jalan yang menghubungkan kota-kota tersebut dengan bobot yang menunjukkan jarak antara kota-kota tersebut. 

Berikut adalah ilustrasi sederhana dari graf berberat:

```
A --(5)-- B
|        / | \
(3)    (4)  (2)
|   /       |   \
C --(6)-- D --(1)-- E
```

Dalam graf di atas:
- Sisi antara A dan B memiliki bobot 5.
- Sisi antara A dan C memiliki bobot 3.
- Sisi antara B dan C memiliki bobot 4.
- Sisi antara B dan D memiliki bobot 2.
- Sisi antara C dan D memiliki bobot 6.
- Sisi antara D dan E memiliki bobot 1.

Bobot ini digunakan untuk berbagai perhitungan dalam konteks yang sesuai dengan masalah yang dipecahkan.

4. Unweighted Graph

Berbeda dengan jenis sebelumnya, unweighted graph tidak memiliki properti bobot pada koneksinya. Graph ini hanya mempertimbangkan apakah dua node saling terhubung atau tidak.

Graf tak berberat (unweighted graph) adalah jenis graf dalam teori graf di mana setiap edge (sisi) dari graf tidak memiliki nilai bobot atau berat yang berhubungan dengannya. Dengan kata lain, dalam graf tak berberat, semua sisi dianggap sama penting atau setara, tanpa atribut tambahan yang membedakan satu sisi dari sisi lainnya. 

Graf tak berberat sering digunakan dalam kasus di mana hubungan antara simpul-simpul hanya perlu dicatat tanpa mempertimbangkan intensitas atau besaran hubungan tersebut. Beberapa contoh aplikasi graf tak berberat adalah:

1. **Jaringan Sosial**: Mewakili hubungan pertemanan atau koneksi antara individu tanpa mempertimbangkan seberapa kuat hubungan tersebut.
2. **Pemetaan Jaringan**: Mewakili struktur topologi jaringan komputer tanpa mempertimbangkan kapasitas atau bandwidth dari koneksi jaringan.
3. **Teori Graf Dasar**: Mengajarkan konsep-konsep dasar teori graf seperti pencarian lintasan, komponen terhubung, dan siklus.

Berikut adalah ilustrasi sederhana dari graf tak berberat:

```
A -- B
|    / |
|  /   |
C -- D -- E
```

Dalam graf di atas:
- Ada sisi antara A dan B.
- Ada sisi antara A dan C.
- Ada sisi antara B dan C.
- Ada sisi antara B dan D.
- Ada sisi antara D dan C.
- Ada sisi antara D dan E.

Setiap sisi dalam graf ini dianggap setara, dan tidak ada bobot atau nilai yang terkait dengan sisi-sisi tersebut. Sifat kesetaraan ini mempermudah beberapa algoritma dan analisis graf, karena tidak perlu memperhitungkan bobot dalam perhitungan. Contoh algoritma yang sering digunakan dalam graf tak berberat termasuk Breadth-First Search (BFS) dan Depth-First Search (DFS) untuk berbagai aplikasi seperti pencarian jalur dan penemuan komponen terhubung [4].

Graph memiliki beberapa karakteristik sebagai berikut:

- Jarak maksimum dari sebuah simpul ke semua simpul lainnya dianggap sebagai eksentrisitas dari simpul tersebut.

- Titik yang memiliki eksentrisitas minimum dianggap sebagai titik pusat dari graph.

- Nilai eksentrisitas minimum dari semua simpul dianggap sebagai jari-jari dari graph terhubung.

B. TREE

Tree atau pohon merupakan struktur data yang tidak linear yang digunakan untuk mempresentasikan data yang bersifat hirarki antara elemen-elemennya. Definisi tree yaitu kumpulan elemen yang salah satu elemennya disebut root (akar) dan elemen yang lain disebut simpul ( node) yang terpecah menjadi sejumlah kumpulan yang tidak saling berhubungan satu sama lain yang disebut sub-tree atau cabang [5].

Tree adalah kumpulan node yang saling terhubung satu sama lain dalam suatu kesatuan yang membentuk layaknya struktur sebuah pohon. Struktur pohon adalah suatu cara merepresentasikan suatu struktur hirarki (one-to-many) secara grafis yang mirip sebuah pohon, walaupun pohon tersebut hanya tampak sebagai kumpulan node-node dari atas ke bawah. Suatu struktur data yang tidak linier yang menggambarkan hubungan yang hirarkis (one-to-many) dan tidak linier antara elemen-elemennya.

Hierarki pada struktur tree dapat diibaratkan seperti sebuah pohon keluarga di mana terdapat hubungan antara orang tua dan anak. Titik yang lebih atas disebut simpul induk sedangkan simpul di bawahnya adalah simpul anak. Struktur data tree terdiri atas kumpulan simpul atau node dimana tiap-tiap simpul dari tree digunakan untuk menyimpan nilai dan sebuah list rujukan ke simpul lain yang disebut simpul anak atau child node.

Tiap-tiap simpul dari tree akan dihubungkan oleh sebuah garis hubung yang dalam istilah teknis disebut edge. Biasanya diimplementasikan menggunakan pointer. Simpul pada tree bisa memiliki beberapa simpul anak (child node). Namun, jalan menuju sebuah child node hanya bisa dicapai melalui maksimal 1 node. Apabila sebuah node atau simpul tidak memiliki child node sama sekali maka dinamakan leaf node.

Istilah-istilah yang ada didalam Tree:

- Predecessor, node yang berada diatas node tertentu
- Successor, node yang berada dibawah node tertentu
- Ancestor, seluruh node yang terletak sebelum node tertentu dan terleteak pada jalur yang sama
- Descendant, seluruh node yang terletak setelah node tertentu dan terletak pada jalur yang sama
- Parent, predecessor satu level di atas suatu node
- Child, successor satu level di bawah suatu node
- Sibling, node-node yang memiliki parent yang sama
- Subtree, suatu node beserta descendantnya
- Size, banyaknya node dalam suatu tree
- Height, banyaknya tingkatan dalam suatu tree
- Root, node khusus yang tidak memiliki predecessor
- Leaf, node-node dalam tree yang tidak memiliki successor
- Degree, banyaknya child daalm suatu node

Adapun karakteristik dari struktur data tree adalah sebagai berikut:

- Penjelahan data (traversing) pada tree dilakukan oleh algoritma Depth First Search dan Breadth First Search
- Tidak ada loop dan circuit
- Tidak memiliki self-loop
- Disusun dalam model hierarki

jenis pohon (tree) dalam struktur data:

 1. **Binary Tree (Pohon Biner)**

Binary tree adalah pohon di mana setiap simpul (node) memiliki paling banyak dua anak, yang disebut sebagai anak kiri (left child) dan anak kanan (right child). Binary tree adalah jenis tree yang simpulnya hanya dapat memiliki paling banyak 2 simpul anak (child node) [6]. Kedua simpul tersebut biasa disebut simpul kiri (left node) dan simpul kanan (right node). Tree tipe ini lebih populer daripada jenis lainnya.

Contoh:
```
    A
   / \
  B   C
 / \
D   E
```

 2. **Binary Search Tree (BST) (Pohon Pencarian Biner)**

Binary Search Tree adalah jenis pohon biner di mana setiap simpul mengikuti aturan:
- Nilai simpul anak kiri lebih kecil dari nilai simpul induk.
- Nilai simpul anak kanan lebih besar dari nilai simpul induk.

Sesuai dengan namanya, Binary search tree digunakan untuk berbagai algoritma pencarian dan pengurutan. Contohnya seperti AVL tree dan Red-black tree. Struktur data tree jenis ini memiliki nilai pada simpul sebelah kiri lebih kecil daripada induknya. Sedangkan nilai simpul sebelah kanan lebih besar dari induknya [7].

Contoh:
```
    8
   / \
  3   10
 / \    \
1   6    14
   / \   /
  4   7 13
```

 3. **Balanced Tree (Pohon Seimbang)**

Apabila tinggi dari subtree sebelah kiri dan subtree sebelah kanan sama atau kalaupun berbeda hanya berbeda 1, maka disebut sebagai balanced tree. Balanced Tree adalah jenis pohon yang menjaga tinggi pohon tetap minimal untuk meningkatkan efisiensi operasi seperti pencarian, penyisipan, dan penghapusan. Contoh Balanced Tree termasuk:

 a. **AVL Tree**

AVL Tree adalah pohon biner yang seimbang di mana perbedaan tinggi antara sub-pohon kiri dan sub-pohon kanan untuk setiap simpul tidak boleh lebih dari satu.

Contoh:
```
    30
   /  \
  20   40
 /      \
10       50
```

 b. **Red-Black Tree**

Red-Black Tree adalah pohon biner yang seimbang dengan aturan tambahan tentang pewarnaan simpul untuk memastikan tidak ada jalan dari akar ke daun yang lebih dari dua kali lebih panjang dari jalan lain.

Contoh:
```
    10 (B)
   /  \
  5 (R)  20 (B)
 /         \
3 (B)      30 (R)
```
(B: Black, R: Red)

 4. **Full Binary Tree (Pohon Biner Penuh)**

Full Binary Tree adalah pohon biner di mana setiap simpul memiliki nol atau dua anak.

Contoh:
```
    1
   / \
  2   3
 / \ / \
4  5 6  7
```

 5. **Complete Binary Tree (Pohon Biner Lengkap)**

Complete Binary Tree adalah pohon biner di mana semua level, kecuali mungkin yang terakhir, terisi penuh, dan semua simpul terisi sejauh mungkin dari kiri ke kanan.

Contoh:
```
    1
   / \
  2   3
 / \  /
4  5 6
```

 6. **Perfect Binary Tree (Pohon Biner Sempurna)**

Perfect Binary Tree adalah pohon biner di mana semua level terisi penuh.

Contoh:
```
    1
   / \
  2   3
 / \ / \
4  5 6  7
```

 7. **General Tree (Pohon Umum)**

General Tree adalah pohon di mana setiap simpul dapat memiliki jumlah anak yang tidak terbatas. Tidak ada batasan pada jumlah anak untuk setiap simpul.

Contoh:
```
    A
   /|\
  B C D
 /|   \
E F    G
```

 8. **N-ary Tree (Pohon N-ary)**

N-ary Tree adalah pohon di mana setiap simpul memiliki paling banyak \(N\) anak. Ketika \(N = 2\), itu adalah binary tree, ketika \(N = 3\), itu adalah ternary tree, dan seterusnya.

Contoh Ternary Tree (N=3):
```
    A
  / | \
 B  C  D
/|\    |
E F G  H
```

 9. **Trie (Prefix Tree)**

Trie adalah pohon khusus yang digunakan untuk menyimpan koleksi string, terutama digunakan dalam aplikasi seperti kamus atau autocomplete.

Contoh:
```
           ""
        /   |   \
       t    b    a
      /    / \    \
     o    a   e    p
    /    /     \    \
   p    t       r    p
                \
                 e
```
(Trie untuk kata-kata: top, bat, bee, bear, apple)

 10. **Segment Tree**

Segment Tree adalah pohon yang digunakan untuk menyimpan interval atau segmen dan digunakan dalam algoritma yang membutuhkan operasi berkali-kali pada interval seperti sum, min, max.

Contoh:
```
    [0, 7]
   /      \
 [0, 3]  [4, 7]
 / \    / \
[0,1][2,3][4,5][6,7]
```

Jenis-jenis tree ini digunakan dalam berbagai aplikasi berdasarkan kebutuhan efisiensi dan spesifikasi operasi yang akan dilakukan pada data yang diorganisasikan dalam struktur tree tersebut [8].

Berikut adalah fungsi dan kegunaan dari struktur data tree

- Dalam kehidupan nyata, struktur data tree membantu dalam pengembangan game.
- Membantu pengindeksan pada database.
- Decision Tree adalah tools yang biasanya digunakan dalam analisis keputusan. Metode ini memiliki struktur seperti diagram alur yang membantu untuk memahami data.
- Domain Name Server juga menggunakan struktur data tree.
- Kasus penggunaan tree yang paling umum adalah situs jejaring sosial, seperti Facebook, Instagram, Twitter, dll.

## Langkah Praktikum 

### Guided 1 Program Graph

#### Kode Program 
```C++
#include <iostream>
#include <iomanip>

using namespace std;
string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};
int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph() {
    for (int baris=0; baris<7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom=0; kolom<7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ") ";
            }
        } cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
#### Output 

![Screenshot 2024-06-04 062827](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/6397aeaa-797e-4b45-8577-194c42b2d36b)

#### Interpretasi
Program ini merupakan implementasi graf berarah menggunakan matriks ketetanggaan. Graf ini memodelkan hubungan antar kota di Indonesia dengan bobot tertentu yang menunjukkan jarak atau biaya antara dua kota. Array `simpul` menyimpan nama-nama kota, yaitu Ciamis, Bandung, Bekasi, Tasikmalaya, Cianjur, Purwokerto, dan Yogyakarta. Matriks `busur` menyimpan bobot busur antar kota, di mana nilai 0 menunjukkan tidak adanya busur antara dua simpul. Fungsi utama dalam program ini adalah `tampilGraph()`, yang menampilkan graf dalam bentuk teks dengan menelusuri array `simpul` dan matriks `busur`. Setiap simpul ditampilkan bersama dengan simpul lain yang terhubung dengannya, diikuti oleh bobot busur yang menghubungkan mereka. Fungsi `main()` memanggil `tampilGraph()` untuk menampilkan graf yang telah didefinisikan. Program ini dimulai dengan mendefinisikan array `simpul` dan matriks `busur`, kemudian fungsi `tampilGraph()` digunakan untuk menampilkan graf dalam bentuk teks. Fungsi ini menggunakan dua loop `for` untuk menelusuri setiap simpul dan busurnya. Jika ada busur antara dua simpul (nilai matriks tidak 0), maka nama simpul tujuan dan bobot busur akan ditampilkan. Output program ini menampilkan setiap kota bersama dengan kota-kota yang terhubung dengannya beserta bobot busur, memberikan gambaran lengkap tentang hubungan antar kota dalam graf tersebut. 


### Guided 2 Program Tree

#### Kode Program 
```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven->left = one;
    // 7
    // /\
    // 1 NULL

    seven->right = nine;
    // 7
    // /\
    // 1 9

    one->left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one->right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine->left = eight;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5
    // /
    // 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```
#### Output 

![Screenshot 2024-06-04 062855](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/d7c32658-fb46-40b6-8358-9fc46911d394)

#### Interpretasi

Program ini bekerja dengan mendefinisikan dan mengimplementasikan sebuah struktur data tree biner. Struktur data ini diwakili oleh kelas `TNode`, yang berisi atribut `data` untuk menyimpan nilai integer dari node, serta dua pointer `left` dan `right` untuk menunjuk ke anak kiri dan anak kanan dari node tersebut. Kelas ini juga memiliki konstruktor yang menginisialisasi nilai `data` dan mengatur pointer `left` dan `right` ke `NULL`.

Dalam fungsi `main`, program pertama-tama membuat beberapa node dengan nilai 0, 1, 5, 7, 8, dan 9. Node-node ini kemudian dihubungkan untuk membentuk sebuah tree biner dengan struktur tertentu. Node `seven` dijadikan root dari tree, dengan `one` sebagai anak kiri dan `nine` sebagai anak kanan. Anak kiri dari `one` adalah `zero` dan anak kanannya adalah `five`. Anak kiri dari `nine` adalah `eight`. Struktur tree yang terbentuk adalah sebagai berikut:
```
    7
   / \
  1   9
 / \  /
0   5 8
```

Setelah tree terbentuk, program melakukan tiga jenis traversal: preorder, inorder, dan postorder. Fungsi `preOrder` mengunjungi node saat ini terlebih dahulu, kemudian anak kiri, dan terakhir anak kanan. Fungsi `inOrder` mengunjungi anak kiri terlebih dahulu, kemudian node saat ini, dan terakhir anak kanan. Fungsi `postOrder` mengunjungi anak kiri terlebih dahulu, kemudian anak kanan, dan terakhir node saat ini. Masing-masing fungsi traversal ini menggunakan rekursi untuk mengunjungi setiap node dalam tree.

Hasil dari masing-masing traversal dicetak ke layar. Traversal preorder mengunjungi node dalam urutan `7 1 0 5 9 8`, traversal inorder menghasilkan urutan `0 1 5 7 8 9`, dan traversal postorder menghasilkan urutan `0 5 1 8 9 7`. Traversal dilakukan dengan mengunjungi node sesuai urutan yang ditentukan oleh metode traversal, mencetak nilai node, dan menggunakan rekursi untuk melanjutkan ke anak kiri dan anak kanan hingga seluruh node dalam tree telah dikunjungi.


## Tugas Praktikum

Cantumkan NIM pada salah satu variabel didalam program.

### Unguided 1
Soal

1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. 

#### Kode Program 
```C++
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
```
#### Output 

![Screenshot 2024-06-04 063014](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/4849e6a2-2072-4a5c-92ad-d520a3816b5f)

#### Interpretasi

Program tersebut terdiri dari beberapa fungsi yang saling berinteraksi untuk memungkinkan pengguna memasukkan informasi tentang kota-kota dan jarak antara mereka. Pertama, program meminta pengguna untuk memasukkan jumlah kota yang ingin dimasukkan. Setelah itu, pengguna diminta untuk memasukkan nama kota satu per satu. Setelah nama kota dimasukkan, program meminta pengguna untuk memasukkan jarak antara setiap pasang kota.

Program menggunakan struktur data vektor untuk menyimpan nama kota dan map untuk menyimpan jarak antara kota-kota. Setelah selesai memasukkan data, program mencetak output yang menampilkan matriks dua dimensi. Nama kota-kota ditampilkan di atas matriks sebagai judul kolom dan di samping matriks sebagai judul baris. Di dalam matriks, setiap elemen mewakili jarak antara pasangan kota yang sesuai.

Output program adalah matriks dua dimensi yang menampilkan jarak antara setiap pasangan kota. Struktur matriks ini memungkinkan pengguna untuk dengan mudah melihat dan memahami hubungan jarak antara kota-kota yang telah dimasukkan.

- Di atas matriks, terdapat judul kolom yang merupakan nama-nama kota yang dimasukkan oleh pengguna. Setiap nama kota menjadi judul kolom yang terletak di atas kolom matriks yang sesuai dengan kota tersebut.
- Di samping matriks, terdapat judul baris yang juga merupakan nama-nama kota yang dimasukkan oleh pengguna. Setiap nama kota menjadi judul baris yang terletak di samping baris matriks yang sesuai dengan kota tersebut.
- Di dalam matriks, setiap elemen mewakili jarak antara pasangan kota yang sesuai. Elemen di baris i dan kolom j menunjukkan jarak antara kota i dan kota j.

### Unguided 2
Soal 

2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

#### Kode Program 
```C++
#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

// Struktur Node Tree
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    // Constructor
    TreeNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Class untuk merepresentasikan Tree
class Tree {
private:
    TreeNode *root;

public:
    // Constructor
    Tree() {
        root = NULL;
    }

    // Fungsi untuk menambahkan node ke dalam Tree
    void insert(int value) {
        TreeNode *newNode = new TreeNode(value);
        if (root == NULL) {
            root = newNode;
            return;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();

            if (temp->left == NULL) {
                temp->left = newNode;
                return;
            } else {
                q.push(temp->left);
            }

            if (temp->right == NULL) {
                temp->right = newNode;
                return;
            } else {
                q.push(temp->right);
            }
        }
    }

    // Fungsi untuk menampilkan child nodes dari suatu node
    void displayChildNodes(int value) {
        TreeNode *current = root;
        queue<TreeNode *> q;
        bool found = false;

        // Traversal level-order untuk mencari node yang diberikan
        q.push(current);
        while (!q.empty() && !found) {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->data == value) {
                current = temp;
                found = true;
            } else {
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }

        // Menampilkan child nodes jika node ditemukan
        if (found) {
            cout << "Child nodes dari " << value << ": ";
            if (current->left)
                cout << current->left->data << " ";
            if (current->right)
                cout << current->right->data << " ";
            cout << endl;
        } else {
            cout << "Node tidak ditemukan!" << endl;
        }
    }

    // Fungsi untuk menampilkan descendant nodes dari suatu node
    void displayDescendantNodes(int value) {
        TreeNode *current = root;
        queue<TreeNode *> q;
        bool found = false;

        // Traversal level-order untuk mencari node yang diberikan
        q.push(current);
        while (!q.empty() && !found) {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->data == value) {
                current = temp;
                found = true;
            } else {
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }

        // Menampilkan descendant nodes jika node ditemukan
        if (found) {
            cout << "Descendant nodes dari " << value << ": ";
            queue<TreeNode *> q_desc;
            q_desc.push(current);
            while (!q_desc.empty()) {
                TreeNode *temp = q_desc.front();
                q_desc.pop();
                cout << temp->data << " ";
                if (temp->left)
                    q_desc.push(temp->left);
                if (temp->right)
                    q_desc.push(temp->right);
            }
            cout << endl;
        } else {
            cout << "Node tidak ditemukan!" << endl;
        }
    }

    // Fungsi untuk menampilkan node-node secara inorder
    void inorder(TreeNode *node) {
        if (node != NULL) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Fungsi untuk menampilkan node-node secara postorder
    void postorder(TreeNode *node) {
        if (node != NULL) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

    // Fungsi untuk menampilkan node-node secara preorder
    void preorder(TreeNode *node) {
        if (node != NULL) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // Fungsi untuk menampilkan seluruh tree secara inorder
    void displayInorder() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }

    // Fungsi untuk menampilkan seluruh tree secara postorder
    void displayPostorder() {
        cout << "Postorder Traversal: ";
        postorder(root);
        cout << endl;
    }

    // Fungsi untuk menampilkan seluruh tree secara preorder
    void displayPreorder() {
        cout << "Preorder Traversal: ";
        preorder(root);
        cout << endl;
    }
};

int main() {
    Tree tree;

    // Input data tree dari user
    int num_nodes;
    cout << "Masukkan jumlah node pada tree: ";
    cin >> num_nodes;
    cout << "Masukkan nilai-nilai dari node-node tersebut:" << endl;
    for (int i = 0; i < num_nodes; ++i) {
        int value;
        cin >> value;
        tree.insert(value);
    }

    // Menampilkan child nodes dan descendant nodes dari node yang diinputkan oleh user
    int target;
    cout << "Masukkan node untuk menampilkan child dan descendant nodes-nya: ";
    cin >> target;
    tree.displayChildNodes(target);
    tree.displayDescendantNodes(target);

    // Menampilkan inorder, postorder, dan preorder traversal dari tree
    tree.displayPreorder();
    tree.displayInorder();
    tree.displayPostorder();

    return 0;
}
```
#### Output 

![Screenshot 2024-06-04 063107](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/75d4fb10-dadd-42e3-b42b-15ff9cccfa70)

#### Interpretasi
Setiap node dalam tree direpresentasikan oleh struktur `TreeNode`, yang memiliki tiga atribut: `data`, `left`, dan `right`, yang mewakili nilai data dari node, pointer ke node anak kiri, dan pointer ke node anak kanan secara berturut-turut.

Kelas `Tree` bertanggung jawab atas pengelolaan keseluruhan struktur tree. Ketika objek `Tree` dibuat, root dari tree diinisialisasi sebagai NULL. Fungsi `insert` digunakan untuk menambahkan node baru ke dalam tree dengan menggunakan pendekatan level-order traversal menggunakan queue.

Program ini juga menyediakan fungsi `displayChildNodes` dan `displayDescendantNodes` untuk menampilkan child nodes dan descendant nodes dari suatu node yang ditentukan oleh pengguna. Kedua fungsi ini menggunakan pendekatan level-order traversal untuk menemukan node yang dimaksud, lalu menampilkan informasi yang relevan.

Selain itu, program ini memiliki fungsi `inorder`, `postorder`, dan `preorder` untuk melakukan traversal tree secara inorder, postorder, dan preorder. Masing-masing fungsi ini menggunakan pendekatan rekursif untuk mengunjungi setiap node dalam tree dan menampilkan nilainya sesuai dengan urutan traversal yang diinginkan.

Dalam fungsi `main`, pengguna diminta untuk memasukkan jumlah node pada tree dan nilai-nilai dari setiap node. Kemudian, pengguna diminta untuk memasukkan node untuk menampilkan child dan descendant nodes-nya. Setelah itu, program menampilkan informasi yang diminta oleh pengguna, termasuk child nodes, descendant nodes, serta hasil dari traversal tree secara inorder, postorder, dan preorder. 

Output program adalah dua jenis penampilan dari tree yang dibuat oleh pengguna, yaitu child nodes dan descendant nodes, serta traversal dari tree tersebut.

1. Child Nodes dan Descendant Nodes:
   - Child nodes dari suatu node ditampilkan sebagai nilai-nilai node yang langsung terhubung ke node tersebut. Jika node tidak memiliki child nodes, pesan "Node tidak memiliki child nodes" akan ditampilkan.
   - Descendant nodes dari suatu node adalah semua node yang berada di bawahnya dalam tree, termasuk child nodes, child nodes dari child nodes, dan seterusnya. Informasi ini memberikan gambaran yang lebih lengkap tentang struktur hierarki dari node yang dipilih.

2. Traversal Tree:
   - Preorder traversal menampilkan urutan kunjungan dari akar ke kiri kemudian ke kanan, yaitu mulai dari node itu sendiri, kemudian node kiri, dan akhirnya node kanan. 
   - Inorder traversal menampilkan urutan kunjungan node dari kiri ke kanan, yaitu mulai dari node kiri, kemudian node itu sendiri, dan akhirnya node kanan.
   - Postorder traversal menampilkan urutan kunjungan dari kiri ke kanan kemudian ke akar, yaitu mulai dari node kiri, kemudian node kanan, dan akhirnya node itu sendiri.

## Kesimpulan 

Berikut adalah kesimpulan mengenai materi graph dan juga tree:

Graph dan tree adalah dua jenis struktur data non-linear yang esensial dalam ilmu komputer dan pemrograman. Graph terdiri dari simpul (vertex) dan sisi (edge) yang menghubungkan simpul-simpul tersebut, dan digunakan untuk merepresentasikan objek-objek diskrit serta hubungan antar mereka. Ada beberapa jenis graf, termasuk directed graph (graf berarah), undirected graph (graf tak berarah), weighted graph (graf berberat), dan unweighted graph (graf tak berberat), yang masing-masing memiliki aplikasi spesifik seperti jaringan sosial, aliran data, dan optimasi jaringan. Tree, di sisi lain, adalah struktur hierarki yang terdiri dari node yang dihubungkan dalam bentuk seperti pohon, dengan satu node khusus disebut root dan yang lainnya child. Jenis-jenis tree termasuk binary tree, binary search tree (BST), balanced tree (AVL Tree dan Red-Black Tree), full binary tree, complete binary tree, perfect binary tree, general tree, N-ary tree, trie, dan segment tree. Tree sering digunakan dalam pengembangan game, pengindeksan database, analisis keputusan, dan pemetaan domain. Keduanya, graph dan tree, adalah alat penting yang digunakan untuk memecahkan berbagai masalah komputasi dengan cara yang efisien dan terstruktur.

## Daftar Pustaka

[1] Y. Jason, "Parsing kode sumber Ecmascript2015 ke dalam Abstract Syntax Tree dan Control Flow Graph," *Undergraduate thesis*, 2020.

[2] J. Zhang, L. Wang, R. K.-W. Lee, Y. Bin, Y. Wang, J. Shao, and E.-P. Lim, "Graph-to-Tree Learning for Solving Math Word Problems," in *Proceedings of the 58th Annual Meeting of the Association for Computational Linguistics*, pp. 3928-3937, 2020.

[3] Quinn, R., Advanced C++ Programming Cookbook. United Kingdoms: Packt Publishing Ltd., 2020.

[4] Sedgewick, R., Algorithms in C++ Part 5: Graph Algorithms 3rd Edition. Boston: Addison-Wesley Professional, 2020.

[5] L. Benny and C. V. Monti, "Aplikasi Permainan Mandarin Scrabble bagi Pemula dengan Algoritma Directed Acyclic Word Graph," *Riset dan E-Jurnal Manajemen Informatika Komputer*, vol. 6, no. 1, pp. 48, 2021. 

[6] H. Lubis and D. B. Srisulistiowati, "Algoritma Prim dan Kruskal dalam Mencari Minimum Spanning Tree pada Bahasa Pemrograman C," *JSI: Jurnal Sistem Informasi*, vol. 8, no. 2, 2021.

[7] R. A. M. Makalew, C. E. J. C. Montolalu, and M. L. Mananohas, "Lintasan Hamiltonian pada Graf 4-Connected," *d'CartesiaN Jurnal Matematika dan Aplikasi*, pp. 181-188, 2020.

[8] Zheng Li dkk, C++ Programming. Republic State of China: De Gruyter, 2019.




