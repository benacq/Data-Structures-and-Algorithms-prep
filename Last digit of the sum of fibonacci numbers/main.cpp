#include <iostream>

/*
Problem Introduction
The goal in this problem is to find the last digit of a sum of the first n Fibonacci numbers.
 -------------------------------

Problem Description
Task. Given an integer n, find the last digit of the sum F 0 + F 1 + · · · + F n .
Input Format. The input consists of a single integer n.
Constraints. 0 ≤ n ≤ 10 14 .
Output Format. Output the last digit of F 0 + F 1 + · · · + F n .
 -------------------------------

 */



/*
Instead of computing this sum in a loop(which will be extremely slow for very huge numbers),
we are going find a pattern from the sum of very small fibonacci numbers to come up with a formula for
F 0 + F 1 + F 2 + · · · + F n.
 -------------------------------

     n    0   1   2   3   4   5    6    7

    F_n   0   1   1   2   3    5    8   13

    S_n   0   1   2   4   7   12    20  33

 -------------------------------


    We can rewrite the relation F(n+1) = F(n) + F(n-1) as below
    F(n-1)    = F(n+1)  -  F(n)
    F(6)      = F(7-1)    = F(7+1)  -  F(7) = 8

    Similarly,
    F(n-2)    = F(n)    -  F(n-1)
    .          .             .
    .          .             .
    .          .             .
    F(0)      = F(2)    -  F(1)


    Adding all the equations, on left side, we have
    F(0) + F(1) + … F(n-1) which is S(n-1).

    Therefore,
    S(n-1) = F(n+1) – F(1)
    S(n-1) = F(n+1) – 1
    S(n) = F(n+2) – 1

    S(3) = F(3+2) - 1
         = F(5) - 1
         = 5 - 1 = 4

    In order to find S(n), simply calculate the (n+2)’th Fibonacci number and subtract 1 from the result.
 -------------------------------
 */


// Computing nth fibonacci in O(Log n), this is a very efficient algorithm than our previous 'efficient'
unsigned long long fib(long long n) {
    n = n % 60;
    long long int f[60] = {0};

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]);
    }
    return f[n];
}

unsigned long long fibSumLastDigit(long long n) {
    return (fib(n + 2) - 1) % 10;
}


int main() {
    long n;
    std::cin >> n;
    std::cout << fibSumLastDigit(n) << std::endl;
    return 0;
}
