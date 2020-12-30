#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

/*
 @AUTHOR Benjamin Acquaah
 I am not a C++ developer(as at the time i am making this) so please prompt me if any part of this is misleading
 or there is a better way to approach this problem. i would love to explore more :)


 *  Problem Introduction
    A thief finds much more loot than his bag can fit. Help him to find the most valuable combination
    of items assuming that any fraction of a loot item can be put into his bag.

 * Problem Description
    Task. The goal of this code problem is to implement an algorithm for the fractional knapsack problem.
    Input Format. The first line of the input contains the number n of items and the capacity W of a knapsack.
    The next n lines define the values and weights of the items. The i-th line contains integers v i and w i —the
    value and the weight of i-th item, respectively.
 ! Constraints. 1 ≤ n ≤ 10^3 , 0 ≤ W ≤ 2 · 10^6 ; 0 ≤ v i ≤ 2 · 10^6 , 0 < w i ≤ 2 · 10^6 for all 1 ≤ i ≤ n. All the numbers are integers.

 *  Output Format.
    Output the maximal value of fractions of items that fit into the knapsack. The absolute
    value of the difference between the answer of your program and the optimal value should be at most
    10^−3 . To ensure this, output your answer with at least four digits after the decimal point (otherwise
    your answer, while being computed correctly, can turn out to be wrong because of rounding issues).


* Sample 1.
    Input:
    3 50
    60 20
    100 50
    120 30
    Output:
    180.0000
    To achieve the value 180, we take the first item and the third item into the bag.
* Sample 2.
    Input:
    1 10
    500 30
    Output:
    166.6667
    Here, we just take one third of the only available item.
 */

/*
 This particular question seems easy but is a bit tricky to go about for someone like myself who have very
 minimal knowledge in data structures and algorithms, during my research, i came across a lot of solutions which
 actually worked but the code was too bulky, i felt that was too much code for a problem like this, until i came
 across this solution by @AbdallahHemdan on github who tackled the problem in a very straight forward approach.
 I have made a few changes to his code to suite my personal coding style and conventions and added a detailed
 explanation to the code.

 * Our input format
  - number of items     bag capacity
  - value               weight
  - value               weight
  - value               weight
  - -----               -----
  - -----               -----
  - -----               -----

  These are number pairs(each value-weight pair is related) so it would be better to find a better way to accept
  the input in that format.
  On way is to use multidimensional array/vector another will be to use a parallel array(two separate arrays
  with the same size but their elements correspond with the other) and the 3rd way is to use c++ pair
  class template(which is what we are going to use).

  So we are going to use c++ vectors to store the pair as elements ie. each element will contain a value and
  weight for a particular item(which is a more simplified way than using 2d vectors or array and parallel arrays)


! vector<pair<int, int>> valueWeight(n);
  A sample input for this will look like this
  [60 20, 100 50, 120 30]
  each element represent one pair of our input (value and weight)

! valueWeight[i].first
  Access the first value of the pair

! valueWeight[i].second
  Access the second value of the pair

! cin >> valueWeight[i].first >> valueWeight[i].second;
  Inside a for loop, insert the values into the pairs by accessing individual indexes of the vector.

! valuePerUnit[i].first = 1.0 * valueWeight[i].first / valueWeight[i].second;
 We create another vector of pairs that will store the value per unit of item and the original weight(dividing value by weight)
 refer to this video to know why we do this https://www.youtube.com/watch?v=oTTzNMHM05I.

 valuePerUnit vector is what we will get our answer from, so we pass it to the getOptimalValue function
 the sort() function is from the c++ algorithm library, it sorts elements in a range in ascending order
* Before sort
    [3 20, 2 50, 4 30]

* After sort(without comparator)
   [2 50, 3 20, 4 30]
   Here we notice that without the comparator the elements are sorted based on the second value of the pair.
   But in our case, we need it to sort with the first value(weight per unit) using the greater<>()
   comparator gives us what we want. once again watch this video to know why we pick the minimum instead of
   maximum https://www.youtube.com/watch?v=oTTzNMHM05I.

* After sort(with comparator)
   [4 30, 3 20, 2 50]

* i < valuePerUnit.size() && knapSackSize > 0
  This is the same as our basic boolean algebra AND operator, returns true if both are true and false otherwise.
  So basically the loop will only stop if knapSackSize is <= 0 and i is not less than the size of the vector.

 At each iteration of the loop, we find the pair that contains the minimum weight and multiply by its value
 to get the original value back and update res with the value.
 One thing we should never forget is to deduct the added weight from the original knapSackSize.

 */

double getOptimalValue(int knapSackSize, vector<pair<double, int>> valuePerUnit) {
    sort(valuePerUnit.begin(), valuePerUnit.end(), greater<>());
    double res = 0;

    for (int i = 0; i < valuePerUnit.size() && knapSackSize > 0; i++) {
        res += min(valuePerUnit[i].second, knapSackSize) * valuePerUnit[i].first;
        knapSackSize -= min(valuePerUnit[i].second, knapSackSize);
    }
    return res;
}

int main() {
    int n, knapSackSize;
    cin >> n >> knapSackSize;
    vector<pair<int, int>> valueWeight(n);
    vector<pair<double, int>> valuePerUnit(n);

    for (int i = 0; i < n; i++) {
        cin >> valueWeight[i].first >> valueWeight[i].second;
        valuePerUnit[i].first = 1.0 * valueWeight[i].first / valueWeight[i].second;
        valuePerUnit[i].second = valueWeight[i].second;
    }
    double res = getOptimalValue(knapSackSize, valuePerUnit);
    cout << fixed << setprecision(4) << res << endl;
}