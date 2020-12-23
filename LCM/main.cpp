#include <iostream>
#include <vector>

using namespace std;


long long lcmNaive(vector<long long> nums) {
    int a = nums[0];
    int b = nums[1];
    long long large = std::max(a, b);
    long long small = std::min(a, b);


    for (long long i = large;; i += large) {
        if (i % small == 0)
            return i;
    }
}

/* the LCM of a and b is the least number n which is divisible by both a and b
 * An efficient algorithm for computing the LCM is by dividing the product of
 * a and b by the gcd(euclidean) of a and b
 */
//long long unsigned int gcd(long long a, long long b) {
//    if (b == 0) return a;
//    long long a_ = a % b;
//    return gcd(b, a_);
//}

unsigned long long int gcd(vector<long long> nums) {
    int a = nums[0];
    int b = nums[1];
    if (b == 0) return a;
    long long a_ = a % b;
    return gcd({b, a_});
}

unsigned long long int lcmEfficient(vector<long long> nums) {
    int a = nums[0];
    int b = nums[1];
    return a / gcd(nums) * b;
}

void stressTesting() {
    while (true) {
        int n = 2;
        vector<long long> a;
        a.reserve(n);
        for (int i = 0; i < n; ++i) {
            a.push_back(random() % 10);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";

        long long res1 = lcmEfficient(a);
        long long res2 = lcmNaive(a);

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
    int n = 2;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    std::cout << lcmEfficient(numbers) << std::endl;
    return 0;
}
