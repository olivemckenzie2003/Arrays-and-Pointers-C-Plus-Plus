#include <iostream>
#include <array>
using namespace std;

// Function to print an array
void printArray(const int arr[], size_t size, const string& arrayName) {
    cout << arrayName << " : ";
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr0[5]{1, 2, 3, 4, 5};
    int arr1[5]{6, 7, 8, 9, 10};
    int* p_arr1{arr1};
    int* p_arr0{arr0};

    // Print initial arrays using the printArray function
    printArray(arr0, std::size(arr0), "arr0");
    printArray(arr1, std::size(arr1), "arr1");

    // Swapping data the hard way
    int temp[5];

    // Move data from arr1 into temp
    for (size_t i = 0; i < std::size(arr1); ++i) {
        temp[i] = arr1[i];
    }

    // Move data from arr0 to arr1
    for (size_t i = 0; i < std::size(arr0); ++i) {
        arr1[i] = arr0[i];
    }

    // Move data from temp to arr0
    for (size_t i = 0; i < std::size(temp); ++i) {
        arr0[i] = temp[i];
    }

    // Print arrays after swapping data the hard way
    printArray(arr0, std::size(arr0), "arr0");
    printArray(arr1, std::size(arr1), "arr1");

    // Swapping data using pointers
    int* temp2{nullptr};
    temp2 = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp2;

    // Print arrays after swapping pointers
    printArray(p_arr0, std::size(arr0), "arr0");
    printArray(p_arr1, std::size(arr1), "arr1");

    return 0;
}
