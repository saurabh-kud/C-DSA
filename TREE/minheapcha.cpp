#include <iostream>
#include <vector>

using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index-1)/2] > heap[index]) {
            swap(heap[index], heap[(index-1)/2]);
            index = (index-1)/2;
        }
    }

    void heapifyDown(int index) {
        int left = 2*index + 1;
        int right = 2*index + 2;
        int smallest = index;

        if (left < heap.size() && heap[left] < heap[smallest]) {
            smallest = left;
        }

        if (right < heap.size() && heap[right] < heap[smallest]) {
            smallest = right;
        }

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size()-1);
    }

    int extractMin() {
        if (heap.empty()) {
            return -1; // or some other error code
        }

        int min = heap[0];
        heap[0] = heap[heap.size()-1];
        heap.pop_back();
        heapifyDown(0);

        return min;
    }

    bool isEmpty() {
        return heap.empty();
    }


    void printHeap(const vector<int>& heap) {
    for (int i = 0; i < heap.size(); i++) {
        cout << heap[i] << " ";

        // calculate the index of the first child of node i
        int leftChild = 2*i + 1;

        // print the left child if it exists
        if (leftChild < heap.size()) {
            cout << heap[leftChild] << " ";
        }

        // calculate the index of the second child of node i
        int rightChild = 2*i + 2;

        // print the right child if it exists
        if (rightChild < heap.size()) {
            cout << heap[rightChild] << " ";
        }
    }

    cout << endl;
}

};
int main() {
    MinHeap heap;

    heap.insert(5);
    heap.insert(2);
    heap.insert(7);
    heap.insert(3);
    while (!heap.isEmpty()) {
        int min = heap.extractMin();
        cout << min << " ";
    }

    cout << endl;

    return 0;
}
