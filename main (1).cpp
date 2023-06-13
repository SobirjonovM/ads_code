/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <thread>

// Function to visualize sorting algorithm using interactive visualizations
void visualizeSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - 1; j++) {
            // Display the current state of the array
            std::cout << arr[j] << " ";
        std::cout << std::endl;

        // Perform the sorting algorithm (e.g., Bubble Sort)
        if (arr[j] > arr[j + 1]) {
            std::swap(arr[j], arr[j + 1]);
        }
    }

        // Pause for a short duration to visualize the changes
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    // Generate a random array of integers
    std::vector<int> arr(10);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = dis(gen);
    }

    // Display the original unsorted array
    std::cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Visualize the sorting process
    visualizeSort(arr);

    // Display the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
