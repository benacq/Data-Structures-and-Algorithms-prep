#include <iostream>
#include <vector>


std::vector<int> selectionSort(std::vector<int> data) {
    for (int i = 0; i < data.size(); ++i) {
        int minIndex = i;
        for (int j = i + 1; j < data.size(); ++j) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(data[i], data[minIndex]);
    }

    return data;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    std::vector<int> data = selectionSort({37, 525, 283, 766, 5, 7, 1, 8, 9, 21});
    for (int i : data) {
        std::cout << i << " ";
    }
    return 0;
}
