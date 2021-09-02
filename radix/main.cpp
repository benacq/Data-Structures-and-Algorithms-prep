#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void countingSort(vector<int> &numbers, int number_place) {
    vector<queue<int>> buckets(10);
    vector<int> sorted;
    sorted.reserve(numbers.size());

    for (int number: numbers) {
        buckets[(number / number_place) % 10].push(number);
    }

    for (auto bucket: buckets) {
        while (!bucket.empty()) {
            sorted.push_back(bucket.front());
            bucket.pop();
        }
    }

    for (int i = 0; i < sorted.size(); ++i) {
        numbers[i] = sorted[i];
    }
}


void radixSort(vector<int> &numbers) {
    int max_num = *max_element(numbers.begin(), numbers.end());

    for (int number_place = 1; max_num / number_place > 0; number_place *= 10) {
        countingSort(numbers, number_place);
    }
}


int main() {
//    vector<int> numbers = {52, 43, 13, 71, 9, 1, 9, 4, 4973, 785, 326, 1};
    vector<int> numbers = {47, 8521, 86, 774, 8975, 741, 21, 100, 500, 7789, 7410, 24, 23, 8, 121};


    radixSort(numbers);

    for (int number: numbers) {
        cout << number << " ";
    }

    return 0;
}
