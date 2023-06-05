#include <iostream>
//? This line includes the input/output stream library, which provides functionality
//? to read from and write to the standard input and output devices (e.g., keyboard, screen).
#include <chrono>
//? This line includes the C++11 <chrono> library, which provides functionality
//? to work with time durations and time points. In the code, it's used to seed the
//? random number generator with the current time.
#include <cstdlib>
//?  This line includes the C++ standard library, which provides functionality for
//?  general-purpose programming. In this code, it's used for the rand() and srand() functions.
#include <vector>

#include <algorithm>

using namespace std;

void descendingSort(int *arr, int size) {
    sort(arr, arr + size, greater<int>());
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(chrono::system_clock::now().time_since_epoch().count()));
    //? This line returns the number of ticks since the epoch (a specific point in time,
    //? usually 00:00:00 Coordinated Universal Time, Thursday, 1 January 1970) for the
    //? system clock. It's used to seed the random number generator.

    //? The srand() function is used to seed the random number generator.
    //? The static_cast<unsigned> is used to convert the number of ticks to an unsigned integer,
    //? which is the required type for srand().

    int random_numbers[20];
    int min = -62;
    int max = -14;

    for (int i = 0; i < 20; i++) {
        random_numbers[i] = min + (rand() % (max - min + 1));
        //? The rand() function generates a random integer. The modulo operator % is used to
        //? limit the range of the random number to the desired range (max - min + 1).
        //? This ensures that the generated random number lies between min and max.
    }

    printArray(random_numbers, 20);

    vector<int> even_numbers;
    vector<int> odd_numbers;
    //? A vector is a dynamic array that can grow or shrink in size during the execution of
    //? a program as needed. It's part of the C++ Standard Template Library (STL) and
    //? provides a more flexible, efficient, and convenient alternative to C-style arrays.
    //? vector<int> means a vector that stores integers.

    for (int i = 0; i < 20; i++) {
        if (random_numbers[i] % 2 == 0) {
            even_numbers.push_back(random_numbers[i]);
            //? The push_back() function is used to add elements to a vector. In this code,
            //? it's used to add even numbers from the random_numbers array to the even_numbers vector.
        } else {
            odd_numbers.push_back(random_numbers[i]);
        }
    }

    descendingSort(even_numbers.data(), even_numbers.size());
    descendingSort(odd_numbers.data(), odd_numbers.size());
    //? The data() function returns a pointer to the first element of the vector.
    //? It's used in this code to pass the vector's data to the descendingSort() and
    //? printArray() functions, which expect pointers to arrays. 

    cout << "Sorted Even Array" << endl;
    printArray(even_numbers.data(), even_numbers.size());
    cout << "Sorted Odd Array" << endl;
    printArray(odd_numbers.data(), odd_numbers.size());

    return 0;
}
