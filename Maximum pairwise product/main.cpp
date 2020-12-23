#include <cstdlib>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

/*
 * Maximum Pairwise Product Problem
    Find the maximum product of two distinct numbers in a sequence of non-negative integers.
    Input: A sequence of non-negative integers.
    Output: The maximum value that can be obtained by multiplying two different elements from the sequence.
 */

long long maxPairwiseProductNaive(const vector<int> &numbers) {
    long long result = 0;
    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (((long long) numbers[i]) * numbers[j] > result) {
                result = ((long long) (numbers[i])) * numbers[j];
            }

        }
    }
    return result;
}


long long maxPairwiseProductEfficient(const vector<int> &numbers) {
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i) {
        if ((max_index1 == -1) || (numbers[i]) > numbers[max_index1]) {
            max_index1 = i;
        }
    }

    int max_index2 = -1;
    for (int j = 0; j < n; ++j) {
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j]) > numbers[max_index2])) {
            max_index2 = j;
        }
    }
    return ((long long) (numbers[max_index1])) * numbers[max_index2];
}


void stressTesting() {
    while (true) {
        int n = rand() % 100 + 2;
        cout << n << "\n";
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            a.push_back(rand() % 100000);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";

        long long res1 = maxPairwiseProductNaive(a);
        long long res2 = maxPairwiseProductEfficient(a);

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        } else {
            cout << "OK\n";
        }
    }
}


int main() {

//    stressTesting();

//    cout << "Please enter n" << "\n";
    int n;
    cin >> n;
    vector<int> numbers(n);
//    cout << "Please enter a sequence of numbers" << "\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    long long result = maxPairwiseProductEfficient(numbers);
    cout << result << "\n";
    return 0;
}
