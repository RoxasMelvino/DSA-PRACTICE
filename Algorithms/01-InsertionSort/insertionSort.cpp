#include <iostream>
#include <vector>

template <typename T>
void insertionSort(std::vector<T>& list) {
    for (int i = 1; i < list.size(); i++) {
        T key = list.at(i); // current element
        int j = i - 1;
        while (j > -1 && list.at(j) > key) {
            list.at(j + 1) = list.at(j);
            j--;
        }
        list.at(j + 1) = key;
    }
}

int main() {
    std::vector<int> nums = {5, 6, 4, 3, 1, 2};

    insertionSort(nums) ;

    std::cout << "[ ";
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums.at(i) << " " ;
    }
    std::cout << "]" << std::endl;

    return 0;
}