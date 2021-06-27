#include <iostream>
#include <vector>


std::vector<int> selectionSort(std::vector<int> data) {


    for (int i = 0; i < data.size(); ++i) {

        std::cout << "Pass " << i << ": " << std::endl;
        int minIndex = i;

        for (int j = i + 1; j < data.size(); ++j) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(data[i], data[minIndex]);

        for (int j : data) {
            std::cout << j << " ";
        }
        std::cout << "\n";


    }

    return data;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    std::vector<int> nums = {128, 47, 8521, 186, 774, 8975, 741, 121, 100, 500, 7789, 7410};
    std::vector<int> data = selectionSort(nums);

//    for (int i : data) {
//        std::cout << i << " ";
//    }

    return 0;
}
