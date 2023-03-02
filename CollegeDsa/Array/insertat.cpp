#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before insertion and deletion : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int element = 0;
    cout << "which element you want to insert ";
    cin >> element;
    cout << " enter the position where you want to insert ";
    int insert_index = 3;
    cin >> insert_index;

    for (int i = n - 1; i >= insert_index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[insert_index-1] = element;

 
    cout << "Array after insertion: ";
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // define the index of the element to be deleted
    int delete_index = 0;
    cout << "enter the index from where you want to delete ";
    cin >> delete_index;

    for (int i = delete_index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
