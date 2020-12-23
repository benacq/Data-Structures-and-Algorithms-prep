#include <iostream>

using namespace std;
/*
******* Problem Introduction *******
The goal in this problem is to find the last digit of the first n Fibonacci numbers.

********* Problem Description ********
Task. Given an integer n, find the last digit of the sum F0 + F1 + · · · + F n .
Input Format. The input consists of a single integer n.
Constraints. 0 ≤ n ≤ 10 14 .
Output Format. Output the last digit of F 0 + F 1 + · · · + F n .
 */



/*
This algorithm turns out to be too slow, because as i grows the ith iteration of the loop computes the sum of longer
and longer numbers. Also, for example, F 1000 does not fit into the standard C++ int type.
 */
long long fibLastDigitNaive(long long n) {
    if (n == 0) return 0;
    long long fibArray[n];

    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibArray[i] = (fibArray[i - 1] + fibArray[i - 2]);
    }
    return fibArray[n] % 10;
}


/*
To overcome this difficulty, you may want to store in F [i] not the ith Fibonacci number itself, but just its last digit (that
is, F i mod 10).
 */
long long fibLastDigitEfficient(long long n) {
    if (n == 0) return 0;
    long long fibArray[n];
    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibArray[i] = (fibArray[i - 1] + fibArray[i - 2]) % 10;
    }
    return fibArray[n];
}


long long fibLastDigitMoreEfficient(long long n) {
    n = n % 60;
    long long int f[60] = {0};

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]);
    }
    return f[n] % 10;
}

void stressTesting() {
    while (true) {
        long n = random() % 100;
        cout << " Fib(" << n << ")\n";
        long long res1 = fibLastDigitEfficient(n);
        long long res2 = fibLastDigitMoreEfficient(n);

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        } else {
            cout << res1 << " " << res2 << "\n";
            cout << "OK\n\n";
        }
    }
}

int main() {
//    stressTesting();
    long n;
    std::cin >> n;
    std::cout << fibLastDigitMoreEfficient(n) << std::endl;

    return 0;
}
