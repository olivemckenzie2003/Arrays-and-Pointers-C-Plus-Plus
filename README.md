# Arrays-and-Pointers-C-Plus-Plus

Function Definition: printArray

void printArray(const int arr[], size_t size, const string& arrayName) {

    cout << arrayName << " : ";
    
    for (size_t i = 0; i < size; ++i) {
    
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
}

    Purpose: This function prints the contents of an array.
    
    Parameters:
    
        const int arr[]: The array to be printed.
        
        size_t size: The number of elements in the array (avoids hardcoding the size).
        
        const string& arrayName: The name of the array, included for context in the output.
        
    Key Features:
    
        The const keyword prevents modifications to the input array.
        
        A simple loop iterates through the array and prints each element.
        
    Use: This eliminates repetitive for loops for printing arrays.

2. Main Function
3. 
Initialization

int arr0[5]{1, 2, 3, 4, 5};

int arr1[5]{6, 7, 8, 9, 10};

int* p_arr1{arr1};

int* p_arr0{arr0};

    Two arrays, arr0 and arr1, are initialized with values.
    Pointers p_arr1 and p_arr0 point to the start of arr1 and arr0 respectively.

Initial Array Printing

printArray(arr0, std::size(arr0), "arr0");

printArray(arr1, std::size(arr1), "arr1");

    Uses the printArray function to print the contents of arr0 and arr1.

Swapping Data "The Hard Way"

int temp[5];

for (size_t i = 0; i < std::size(arr1); ++i) {

    temp[i] = arr1[i];
}

for (size_t i = 0; i < std::size(arr0); ++i) {

    arr1[i] = arr0[i];
}

for (size_t i = 0; i < std::size(temp); ++i) {
    arr0[i] = temp[i];
}

    Temporary Array: A temporary array, temp, is created to hold the data from arr1.
    
    Copying Data:
    
        Elements from arr1 are moved to temp.
        
        Elements from arr0 are copied to arr1.
        
        Elements from temp are copied back to arr0.
        
    Effect: This swaps the data between arr0 and arr1.

Printing After Swapping (Hard Way)

printArray(arr0, std::size(arr0), "arr0");

printArray(arr1, std::size(arr1), "arr1");

    The arrays are printed to verify the swapping.

Swapping Data Using Pointers

int* temp2{nullptr};

temp2 = p_arr1;

p_arr1 = p_arr0;

p_arr0 = temp2;

    Pointer Swap: Instead of copying data, the pointers p_arr0 and p_arr1 are swapped using a temporary pointer, temp2.
    
    Effect: After the swap, p_arr0 points to arr1 and p_arr1 points to arr0. This is a more efficient way to "swap" arrays since the data in memory remains unchanged.

Printing After Pointer Swap

printArray(p_arr0, std::size(arr0), "arr0");

printArray(p_arr1, std::size(arr1), "arr1");

    The printArray function is used to print the contents of p_arr0 and p_arr1, showing that their roles have been swapped.

Key Features and Advantages

    Reusability: The printArray function reduces code duplication for printing arrays.
    
    Efficiency: Swapping data using pointers avoids the overhead of copying elements between arrays.
    
    Readability: Code organization with functions and consistent naming makes the logic easier to follow.

Output Example

Here's what the program prints:

    Initial values:

arr0 : 1 2 3 4 5

arr1 : 6 7 8 9 10

After swapping data the hard way:

arr0 : 6 7 8 9 10

arr1 : 1 2 3 4 5

After swapping pointers:

arr0 : 1 2 3 4 5

arr1 : 6 7 8 9 10
