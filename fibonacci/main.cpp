#include <iostream>
#include <vector>

using namespace std;
/*
 * PROBLEM STATEMENT
 * compute the nth Fibonacci number
 */


/*
 * RECURSIVE SOLUTION(NAIVE)
 * @param n
 * @returns int fib(n)
 */
int fibRecursive(int n) {
    if (n <= 1) return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}


/*
 * EFFICIENT SOLUTION(BUT STILL NAIVE)
 * @param n
 * @returns int fib(n)
 */
uint64_t fibEfficient(int n) {
    uint64_t fibCached[n];
    fibCached[0] = 0;
    fibCached[1] = 1;

    for (uint64_t i = 2; i <= n; ++i) {
        fibCached[i] = fibCached[i - 1] + fibCached[i - 2];
    }
    return fibCached[n];
}

long long fibMoreEfficient(long long n) {
    const long long MAX = 99999;
    vector<long long> f(MAX);

    if (n == 0) return 0;
    if (n == 1 || n == 2) return (f[n] = 1);

    if (f[n]) return f[n];

/*
  x & 1 is equivalent to x % 2.
  -------------------------------
  x & 1 produces a value that is either 1 or 0, depending on the least significant bit of x: if the last bit is 1,
  the result of x & 1 is 1; otherwise, it is 0. This is a bitwise AND operation.
  */
    long long k = (n & 1) ? (n + 1) / 2 : n / 2;

    f[n] = (n & 1) ? (fibMoreEfficient(k) * fibMoreEfficient(k) + fibMoreEfficient(k - 1) * fibMoreEfficient(k - 1))
                   : (2 * fibMoreEfficient(k - 1) + fibMoreEfficient(k)) * fibMoreEfficient(k);

    return f[n];
}


void stressTesting() {
    while (true) {
        int n = rand() % 100;
        cout << " Fib(" << n << ")\n";
        long long res1 = fibEfficient(n);
        long long res2 = fibMoreEfficient(n);
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
    long long n;
    cin>>n;
    std::cout << fibMoreEfficient(n) << std::endl;
    return 0;
}

