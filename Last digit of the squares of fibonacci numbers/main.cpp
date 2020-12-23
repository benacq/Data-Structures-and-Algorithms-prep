#include <iostream>

/*
 Compute the last digit of a fibonacci number squared

    n      1       2       3       4       5       6       7       8       9       10
    Fn     1       1       2       3       5       8       13      21      34      55
    Fn^2   1       1       4       9       25      64      169     441     1156    3025

    The last digit of the square of any real number has a pattern to it, they usually end in one of these numbers
    0,1,4,5,6, or 9.
    These is quite a small range, the interesting part is you don't have to compute the square of a number to
    know the last digit, all you need is the last digit of the number you want to find the last digit of its square
    For that too we have a range of 0 - 9

    if the last digit of a number is 0, its square ends in 0 (in fact, the last two digits must be 00);
    if the last digit of a number is 1 or 9, its square ends in 1;
    if the last digit of a number is 2 or 8, its square ends in 4;
    if the last digit of a number is 3 or 7, its square ends in 9;
    if the last digit of a number is 4 or 6, its square ends in 6; and
    if the last digit of a number is 5, its square ends in 5 (in fact, the last two digits must be 25).

    Now you can clearly see how easy it has become, we can make use of parallel arrays to compute this but
    since we are dealing with fibonacci, the last digit of all our values are stored inside an array,
    all we have to do is map that to the index of the expected last digit of the square of that number.
    Let's take a look at the code.
 */

long long fibSquareLastDigit(long long n) {
    n = n % 60;
    /* The last digit of the square of any fibonacci number must come from this array
     * All we need to do is to find the last digit of the fibonacci number which will be in
     * the range of the index of this array.
     * If the last digit of the fibonacci is 0, the last digit of its square is also 0
     * If the last digit of the fibonacci is 4 or 6, the last digit of its square is also 6, that's why
     * we have two 6's representing both index.
     */
    long long lastDigitExpected[10] = {0, 1, 4, 9, 6, 5, 6, 9, 4, 1};
    long long f[60] = {0};

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }
    //We return the value of the last digit expected by using the last digit of Fn as an index
    return lastDigitExpected[f[n]];
}


int main() {
    std::cout << fibSquareLastDigit(73) << std::endl;

//    std::cout << 1548008755920 * 1548008755920 << std::endl;
//    std::cout << 313679520 % 60 << std::endl;
//    std::cout << sumSquares(200) << std::endl;
    return 0;
}
