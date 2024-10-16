#include <iostream>

using namespace std;

class MinHeap {
private:
    int* heapArray;
    int capacity;
    int heapSize;

    int parent(int i) {
        return (i - 1) / 2;
    }

    int leftChild(int i) {
        return 2 * i + 1;
    }

    int rightChild(int i) {
        return 2 * i + 2;
    }

    void heapify(int i) {
        int l = leftChild(i);
        int r = rightChild(i);
        int smallest = i;

        if (l < heapSize && heapArray[l] < heapArray[i])
            smallest = l;

        if (r < heapSize && heapArray[r] < heapArray[smallest])
            smallest = r;

        if (smallest != i) {
            swap(heapArray[i], heapArray[smallest]);
            heapify(smallest);
        }
    }

public:
    MinHeap(int cap) {
        capacity = cap;
        heapArray = new int[cap];
        heapSize = 0;
    }

    ~MinHeap() {
        delete[] heapArray;
    }

    void insert(int key) {
        if (heapSize == capacity) {
            cout << "Heap overflow\n";
            return;
        }

        heapSize++;
        int i = heapSize - 1;
        heapArray[i] = key;

        while (i != 0 && heapArray[parent(i)] > heapArray[i]) {
            swap(heapArray[i], heapArray[parent(i)]);
            i = parent(i);
        }
    }

    int extractMin() {
        if (heapSize <= 0)
            return INT_MAX;

        if (heapSize == 1) {
            heapSize--;
            return heapArray[0];
        }

        int root = heapArray[0];
        heapArray[0] = heapArray[heapSize - 1];
        heapSize--;
        heapify(0);

        return root;
    }

    void printHeap() {
        cout << "Min Heap: ";
        for (int i = 0; i < heapSize; i++)
            cout << heapArray[i] << " ";
        cout << "\n";
    }
};

int main() {
    MinHeap minHeap(10);

    minHeap.insert(3);
    minHeap.insert(2);
    minHeap.insert(1);
    minHeap.insert(15);
    minHeap.insert(5);
    minHeap.insert(4);
    minHeap.insert(45);

    minHeap.printHeap();

    cout << "Extract Min: " << minHeap.extractMin() << "\n";

    minHeap.printHeap();

    return 0;
}
