// //insertion at user defined location
#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

   
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int value, index;
    cout << "Enter the value to insert: ";
    cin >> value;
    cout << "Enter the index where you want to insert: ";
    cin >> index;

    if (index >= 0 && index <= size) {
        
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[index] = value;

        size++; 

        cout << "Updated Array after insertion: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid index. Please enter a valid index within the range." << endl;
    }

    return 0;
}
//deletion at user defined location
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the array elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter the index to delete: ";
    cin >> index;

    if (index >= 0 && index < size) {
        // Shift elements to remove the element at the specified index
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--; // Decrease the size of the array

        cout << "Updated Array after deletion: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid index. Please enter a valid index within the range." << endl;
    }

    return 0;
}
