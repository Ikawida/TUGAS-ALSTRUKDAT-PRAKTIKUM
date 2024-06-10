// Nomor 5. Hash Table 

#include <iostream>
#include <vector>
using namespace std;

const int TABLE_SIZE = 5;

class HashNode {
public:
    int numbs; 
    int target; 

    HashNode(int numbs) {
        this->numbs = numbs;
        this->target = target;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];

public:
    void insert(int numbs, int target) {
        int hash_val = hashfunc(numbs);
        for (auto node : table[hash_val]) {
            if (node->numbs == numbs) {
                node->target = target;
                return;
            }
        }
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->numbs << ", " << pair->target << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("2,7,11,15", "9");

    cout << "Hash Table : " << endl;
    employee_map.print();

    return 0;
}