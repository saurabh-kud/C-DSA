#include <iostream>
#include <vector>
using namespace std;

// Define a hash function to map keys to indices in the hash table
int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

// Define a struct to represent a key-value pair
struct KeyValuePair {
    int key;
    string value;
};

int main() {
    // Initialize the size of the hash table and the array to store the key-value pairs
    const int TABLE_SIZE = 10;
    vector<KeyValuePair> hashTable(TABLE_SIZE);

    // Insert some values into the hash table
    hashTable[hashFunction(1, TABLE_SIZE)] = {1, "Priti"};
    hashTable[hashFunction(2, TABLE_SIZE)] = {2, "amisha"};
    hashTable[hashFunction(3, TABLE_SIZE)] = {3, "ankita"};

    // Search for a value in the hash table
    int keyToFind = 2;
    int index = hashFunction(keyToFind, TABLE_SIZE);
    if (hashTable[index].key == keyToFind) {
        cout << "Value found for key " << keyToFind << ": " << hashTable[index].value << endl;
    } else {
        cout << "Value not found for key " << keyToFind << endl;
    }

    return 0;
}
