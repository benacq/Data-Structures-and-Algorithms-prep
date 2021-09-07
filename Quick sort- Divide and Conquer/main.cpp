#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int> &numbers, int lower_bound, int upper_bound) {
    auto pivot = numbers[lower_bound];
    int start = lower_bound, end = upper_bound;

    while (start < end) {
        do {
            start++;
        } while (numbers[start] <= pivot);

        do {
            end--;
        } while (numbers[end] > pivot);

        if (start < end) {
            std::swap(numbers[start], numbers[end]);
        }
    }
    std::swap(numbers[lower_bound], numbers[end]);
    return end;
}

void quickSortRecursive(vector<int> &numbers, int lower_bound, int upper_bound) {
    if (lower_bound >= upper_bound) return;
    int partition_loc = partition(numbers, lower_bound, upper_bound);
    quickSortRecursive(numbers, lower_bound, partition_loc - 1);
    quickSortRecursive(numbers, partition_loc + 1, upper_bound);

}

int main() {
    vector<int> nums = {34, 542, 3, 53, 45, 89, 8};
    quickSortRecursive(nums, 0, nums.size());

    for (int num: nums) {
        cout << num << " ";
    }

    return 0;
}
