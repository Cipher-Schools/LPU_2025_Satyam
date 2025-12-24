#include <bits/stdc++.h>
using namespace std;

class HashTable {
    enum State { EMPTY, OCCUPIED, DELETED };

    struct Node {
        int key;
        State state;
        Node() : key(0), state(EMPTY) {}
    };

    int size;
    vector<Node> table;

public:
    HashTable(int s) {
        size = s;
        table.resize(size);
    }

    int hashFunc(int key) {
        return key % size;
    }

    // INSERT
    void insert(int key) {
        int index = hashFunc(key);

        for (int i = 0; i < size; i++) {
            int probe = (index + i) % size;

            if (table[probe].state == EMPTY || table[probe].state == DELETED) {
                table[probe].key = key;
                table[probe].state = OCCUPIED;
                return;
            }
        }

        cout << "Hash table full\n";
    }

    // SEARCH
    bool search(int key) {
        int index = hashFunc(key);

        for (int i = 0; i < size; i++) {
            int probe = (index + i) % size;

            if (table[probe].state == EMPTY)
                return false;

            if (table[probe].state == OCCUPIED && table[probe].key == key)
                return true;
        }
        return false;
    }

    // DELETE
    void remove(int key) {
        int index = hashFunc(key);

        for (int i = 0; i < size; i++) {
            int probe = (index + i) % size;

            if (table[probe].state == EMPTY)
                return;

            if (table[probe].state == OCCUPIED && table[probe].key == key) {
                table[probe].state = DELETED;
                return;
            }
        }
    }

    // UPDATE
    void update(int oldKey, int newKey) {
        if (!search(oldKey))
            return;

        remove(oldKey);
        insert(newKey);
    }

    // DISPLAY
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " : ";
            if (table[i].state == OCCUPIED)
                cout << table[i].key;
            else if (table[i].state == DELETED)
                cout << "DELETED";
            else
                cout << "EMPTY";
            cout << endl;
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
