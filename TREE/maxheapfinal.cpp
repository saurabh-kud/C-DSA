#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index-1)/2] < heap[index]) {
            swap(heap[index], heap[(index-1)/2]);
            index = (index-1)/2;
        }
    }

    void heapifyDown(int index) {
        int left = 2*index + 1;
        int right = 2*index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }

        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size()-1);
    }

    int extractMax() {
        if (heap.empty()) {
            return -1; // or some other error code
        }

        int max = heap[0];
        heap[0] = heap[heap.size()-1];
        heap.pop_back();
        heapifyDown(0);

        return max;
    }

    bool isEmpty() {
        return heap.empty();
    }

    void printHeap() {
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
    MaxHeap heap;

    heap.insert(5);
    heap.insert(2);
    heap.insert(7);
    heap.insert(3);

    heap.printHeap();
    cout << "extracted max :";
    cout << heap.extractMax() << endl;

    return 0;
}
