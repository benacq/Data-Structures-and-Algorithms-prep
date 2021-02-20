#include <iostream>
#include <vector>


std::vector<int> mergeSort(std::vector<int> data) {
    int current, index;
//    for (int pass = 1; pass < data.size(); ++pass) {
//        std::cout << "Pass " << pass << ": " << std::endl;
//        current = data[pass];
//        index = pass;
//        while (index > 0 && data[index - 1] > current) {
//            data[index] = data[index - 1];
//            index--;
//        }
//        data[index] = current;
//
//        for (int i : data) {
//            std::cout << i << " ";
//        }
//
//        std::cout << "\n";
//    }
    return data;
}

int main() {
    std::vector<int> data = mergeSort({37, 525, 283, 766, 5, 7, 1, 8, 9, 21});
    std::cout << "\nFinal sorted list: \n";
    for (int i : data) {
        std::cout << i << " ";
    }
    return 0;
}
