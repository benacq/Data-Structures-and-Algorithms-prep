#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearchRecursive(vector<int> nums, int lower_bound, int upper_bound, int key) {
    int mid;
    if (upper_bound < lower_bound) return lower_bound - 1;
    mid = floor(((upper_bound - lower_bound) / 2) + lower_bound);
    if (key == nums[mid]) {
        return mid;
    } else if (key < nums[mid]) {
        return binarySearchRecursive(nums, lower_bound, mid - 1, key);
    } else {
        return binarySearchRecursive(nums, mid + 1, upper_bound, key);
    }
}

int binarySearchIterative(vector<int> nums, int lower_bound, int upper_bound, int key) {
    int mid;
    while (lower_bound <= upper_bound) {
        mid = floor(((upper_bound - lower_bound) / 2) + lower_bound);
        if (key == nums[mid]) {
            return mid;
        } else if (key < nums[mid]) {
            upper_bound = mid - 1;
        } else {
            lower_bound = mid + 1;
        }
    }
    return lower_bound - 1;
}

int main() {
    //    0  1  2  3   4   5   6   7   8   9  10
    vector<int> nums = {3, 5, 8, 10, 12, 15, 18, 20, 20, 50, 60};

    cout << binarySearchRecursive(nums, 0, nums.size(), 50) << std::endl;
    cout << binarySearchIterative(nums, 0, nums.size(), 50) << std::endl;
    return 0;
}
