#include <iostream>
#include <vector>

using namespace std;

/*
* Problem Introduction
Now, we would like to find the last digit of a partial sum of Fibonacci numbers: Fm + Fm+1 + · · · + Fn.

* Problem Description
Task. Given two non-negative integers m and n, where m ≤ n, find the last digit of the sum Fm + Fm+1 + · · · + Fn.
Input Format. The input consists of two non-negative integers m and n separated by a space.
Constraints. 0 ≤ m ≤ n ≤ 10 14 .
Output Format. Output the last digit of Fm + Fm+1 + · · · + Fn.

m here is acting more like an offset;
 */



/*
If you write out a sequence of Fibonacci numbers, you can see that the last digits repeat every 60 numbers.
The 61st Fibonacci number is 2504730781961. The 62nd is 4052739537881. Since these end in 1 and 1,
the 63rd Fibonacci number must end in 2, etc. and so the pattern starts over.

since the last digit of a sum is determined by the sum of the last digits,
the sequence of last digits must repeat eventually

Since f(n) can be a very huge number computing the sum in addition may not fit the standard c++ integer type
From the pattern we discovered we can notice we actually need just the first 60 fibonacci numbers to get the last
digit of any fibonacci number not matter how huge it is.

 */

long long fib(unsigned long long int n) {
    if (n % 15 == 0) return 0;
    n = n % 60;
    long long f[60] = {0};
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; ++i) {
        f[i] = (f[i - 1] + f[i - 2]);
    }
//    cout << f[n] << "\n";
    return f[n];
}

unsigned long long int fibSumLastDigit(vector<unsigned long long int> nums) {
    unsigned long long int m = nums[0];
    unsigned long long int n = nums[1];

    if (m > n || m < 0) return 0;

    long long offsetSum = fib(m + 1) - 1;
    long long sumN = fib(n + 2) - 1;

    if (offsetSum > sumN) {
        offsetSum = offsetSum % 30;
    }
    return (sumN - offsetSum) % 10;
}

int main() {
    int n = 2;
    vector<unsigned long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    std::cout << fibSumLastDigit(numbers) << std::endl;
    return 0;
}
