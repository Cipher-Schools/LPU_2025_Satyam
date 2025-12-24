#include <bits/stdc++.h>
using namespace std;

class HashTable {
    int size;
    vector<list<int>> table;

public:
    HashTable(int s) {
        size = s;
        table.resize(size);
    }

    int hashFunc(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunc(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunc(key);
        for (int x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    void remove(int key) {
        int index = hashFunc(key);
        table[index].remove(key);
    }

    void update(int oldKey, int newKey) {
        if (!search(oldKey))
            return;

        remove(oldKey);
        insert(newKey);
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " : ";
            for (int x : table[i])
                cout << x << " -> ";
            cout << "NULL\n";
        }
    }
};

int main() {
    HashTable ht(7);

    ht.insert(15);
    ht.insert(25);
    ht.insert(35);

    cout << "Initial table:\n";
    ht.display();

    cout << "\nSearch 25: " << (ht.search(25) ? "Found" : "Not Found") << endl;

    ht.remove(25);
    cout << "\nAfter deleting 25:\n";
    ht.display();

    ht.update(35, 42);
    cout << "\nAfter updating 35 to 42:\n";
    ht.display();
}
