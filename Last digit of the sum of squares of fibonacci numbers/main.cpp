#include <iostream>

/*
Problem Description
Task. Compute the last digit of F 0 2 + F 1 2 + · · · + F n 2 .
Input Format. Integer n.
Constraints. 0 ≤ n ≤ 10 14 .
Output Format. The last digit of F 0 2 + F 1 2 + · · · + F n 2 .


 THIS TABLE REPRESENT THE FIRST 10 FIBONACCI NUMBERS, THEIR SUMS AND SQUARES

 n      1       2       3       4       5       6       7       8       9       10
 Fn     1       1       2       3       5       8       13      21      34      55
 Sn     1       2       4       7       12      20      33      54      88      143     => F(n+2) -1
 Fn^2   1       1       4       9       25      64      169     441     1156    3025
 Sn^2   1       2       6       15      40      104     273     714     1870    4895    => Fn * F(n+1)

 ^2 <=> exponent 2

 As we already know how huge fibonacci numbers can get within a short time, we obviously wouldn't want to compute
 the actual square of fibonacci numbers but instead search for a pattern that will make us arrive at the same
 answer but in a very short time and with minimal resources.

 The last digit of fibonacci numbers repeat after every 60 numbers(meaning we can capitalize on that), so for every
 number we input, we first have to find the remainder when the number is divided by 60, the last digit of the fibonacci
 of the remainder is the same as the input number not matter how huge it is, which means the maximum time the
 algorithm is running is 60 times for any input.
 */
unsigned long long int fib(long long n) {
    // The last digit for the fibonacci of any number that is divisible by 15 is 0
    if (n % 15 == 0) return 0;

    n = n % 60;
    // Caching previous computed values to access later
    long long f[60] = {0};

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]);
    }
//    std::cout << f[n] << "\n";
    return f[n];
}

unsigned long long int sumSquaresLastDigit(long long n) {
    return ((fib(n) % 10) * (fib(n + 1) % 10)) % 10;
}

int main() {
    long n;
    std::cin >> n;
    std::cout << sumSquaresLastDigit(n) << std::endl;
    return 0;
}
