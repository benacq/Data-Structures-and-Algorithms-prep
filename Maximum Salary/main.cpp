#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::vector;
using std::string;
using namespace std;


bool greaterOrEqual(string &a, string &b) {
//    cout << "VALUES " << b << "  "<< a << endl;
//    cout << b + a << "  " << a + b << "   ||   " << (b + a > a + b) << endl;
    return b + a > a + b;
}


string maxSalary(vector<string> numbers) {
    string maxSal;
    sort(numbers.begin(), numbers.end(), std::greater<>());


    for (int i = 1; i < numbers.size(); ++i) {
        for (int j = 0; j < numbers.size() - 1; ++j) {
            if (greaterOrEqual(numbers[j], numbers[j + 1])) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    for (const string &number : numbers) {
        maxSal += number;
    }
    return maxSal;

}

//
int main() {
    int n;
    std::cin >> n;
    vector<string> numbers(n);

    for (string &number : numbers) {
        std::cin >> number;
    }

    std::cout << maxSalary(numbers) << std::endl;
    return 0;
}














