#include <iostream>
#include <vector>

using namespace std;


int linearSearchRecursive(vector<int> nums, int lower_bound, int upper_bound, int key) {
    if (upper_bound < lower_bound)
        return -1;
    if (nums[lower_bound] == key)
        return lower_bound;
    return linearSearchRecursive(nums, lower_bound + 1, upper_bound, key);
}

int linearSearchIterative(vector<int> nums, int lower_bound, int upper_bound, int key) {

    for (int i = lower_bound; i <= upper_bound; ++i) {
        if (nums[i] == key)
            return i;
    }
    return -1;

}

int main() {

    vector<int> nums = {3, 6, 5, 2, 73, 23, 65, 43};
    cout << linearSearchRecursive(nums, 0, nums.size(), 73) << std::endl;
    cout << linearSearchIterative(nums, 0, nums.size(), 73) << std::endl;

    return 0;
}
