#include <iostream>
#include <vector>


std::vector<int> bubbleSort(std::vector<int> data) {
    for (int pass = 1; pass < data.size() - 2; ++pass) {
        int flag = 0;
        std::cout << "Pass " << pass << ": " << std::endl;
        for (int j = 1; j < data.size() - (pass - 1); ++j) {
            if (data[j] < data[j - 1]) {
                std::swap(data[j], data[j - 1]);
                flag = 1;
            }
        }
        if (flag == 0) break;
        for (int i : data) {
            std::cout << i << " ";
        }

        std::cout << "\n";
    }
    return data;
}

int main() {
    std::vector<int> data = bubbleSort({37, 525, 283, 766, 5, 7, 1, 8, 9, 21});
    std::cout << "\nFinal sorted list: \n";
    for (int i : data) {
        std::cout << i << " ";
    }
    return 0;
}
