#include <iostream>
#include <vector>
//#include <iterator>
using namespace std;

/*  * MONEY CHANGE PROBLEM
    The goal in this problem is to find the minimum number of coins needed to change the input value
    (an integer) into coins with denominations 1, 5, and 10.
    Input Format. The input consists of a single integer m.
    Constraints. 1 ≤ m ≤ 10^3 .
    Output Format. Output the minimum number of coins with denominations 1, 5, 10 that changes m.

  ! Sample 1.
    Input:
    2
    Output:
    2
    2 = 1 + 1.
  ! Sample 2.
    Input:
    28
    Output:
    6
    28 = 10 + 10 + 5 + 1 + 1 + 1.
*/

/*
 This is a very simple algorithm, however its a bit confusing if its your first time seeing it.
 Our goal is to find the number of coins(from the denomination) that when added will equal the input number.
 if 17 is out input, what is the combination of numbers in the denomination that add up to 17?

 - 1+1+1.....+1
 - 5+1+1+1+1....+1
 - 10+5+1+1
 - 10+1+1+1....+1

 All these will give us what we need, but the question requires us to find the minimum number of coins to
 will add up to our input.
 The minimum in our possible solutions is 10+5+1+1 so our answer should be 4.
 Now how do we approach this algorithmically?

 * Sort our denominations in ascending order.
 * Initialize a variable that will track the number of coins we have found.
 * Check if the input number is greater or equal to the largest denomination.
 * If true, subtract it from the input, reassign the result to the input number and increase our tracker by 1
 * Check again until current input is less than the largest denomination (while loop will be useful at this step)
 */
long long moneyChange(long amount) {
    vector<int> denominations = {10, 5, 1};
    int n = denominations.size();
    int coin_count = 0;

    for (int i = 0; i < n; ++i) {
        while ((amount - denominations[i]) >= 0) {
            amount -= denominations[i];
            coin_count++;
        }
    }

    return coin_count;
}

int main() {
    long n;
    std::cin>>n;
    std::cout << moneyChange(n) << std::endl;
    return 0;
}
