#include <iostream>
#include <vector>

using namespace std;

/*GREATEST COMMON DIVISOR
 *For two integers a and b, their greatest common divisor or GCD(a,b) is the largest integer d
 *that divides both a and b.
 *
 * PROBLEM STATEMENT
 * Write an algorithm to compute the largest number that divides both a and b
 */



/*This is a naive solution which works but would take a very long time to compute large numbers
 *@param int a, int b
 * @returns int gcd(a,b)
 */
int gcdNaive(vector<long long> nums) {
    int a = nums[0];
    int b = nums[1];
    int gcd = 0;
    for (int d = 1; d <= (a + b); ++d) {
        if (a % d == 0 && b % d == 0) {
            gcd = d;
        }
    }
    return gcd;
}

/*
 *THE EUCLIDEAN ALGORITHM
 *Suppose that we make a'(A prime) be the remainder when a is divided by b the
 *gcd(a,b) = gcd(a',b) = gcd(b,a')
 *example, let's find the gcd(3918848,1653264)
 * gcd(3918848,1653264)
 * gcd(1653264,612320)
 * gcd(612320,428624)
 * gcd(428624,183696)
 * gcd(183696,61232)
 * gcd(61232,0)
 */

/*This is an efficient solution which implements the euclidean algorithm to compute the GCD of any given number
 *@param int a, int b
 * @returns int gcd(a,b)
 */
int gcdEfficient(vector<long long> nums) {
    int a = nums[0];
    int b = nums[1];
    if (b == 0) return a;
    long long a_ = a % b;
    return gcdEfficient({b, a_});
}

void stressTesting() {
    while (true) {
        int n = 2;
        vector<long long> a;
        a.reserve(n);
        for (int i = 0; i < n; ++i) {
            a.push_back(random() % 10000000000);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";

        long long res1 = gcdNaive(a);
        long long res2 = gcdEfficient(a);

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        } else {
            cout << "OK\n";
        }
    }
}

int main() {
    int n = 2;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    std::cout << gcdEfficient(numbers) << std::endl;
    return 0;
}
