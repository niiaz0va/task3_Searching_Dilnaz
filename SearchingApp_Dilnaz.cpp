
#include <iostream>
#include <array>
#include <vector>
#include "Searching.cpp"

int main() {
    std::vector<int> vec = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 }; // Already sorted
    int target;

    std::cout << "Enter the value of target: ";
    std::cin >> target;

    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    int firstIndex = binarySearchFirst(vec, target);
    if (firstIndex != -1) {
        std::cout << "Binary search first occurrence. Element found at index: " << firstIndex << std::endl;
    } else {
        std::cout << "Binary search first occurrence. Element not found in the vector." << std::endl;
    }

    std::array<int, 10> arr = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 }; // Already sorted
    int arrayIndex = binarySearch(arr, target);
    if (arrayIndex != -1) {
        std::cout << "Binary search in array. Element found at index: " << arrayIndex << std::endl;
    } else {
        std::cout << "Binary search in array. Element not found in the array." << std::endl;
    }

    int arrayFirstIndex = binarySearchFirst(arr, target);
    if (arrayFirstIndex != -1) {
        std::cout << "Binary search first occurrence in array. Element found at index: " << arrayFirstIndex << std::endl;
    } else {
        std::cout << "Binary search first occurrence in array. Element not found in the array." << std::endl;
    }

    return 0;
}
