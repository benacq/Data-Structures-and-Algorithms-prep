#include <iostream>
#include <vector>
#include <cmath>

using std::vector;


vector<long long> optimal_summands(long long n) {
    vector<long long> summands;
    for (int k = n, l = 1; k > 0; l++) {
        if (k <= 2 * l) {
            summands.push_back(k);
            k -= k;
        } else {
            summands.push_back(l);
            k -= l;
        }
    }
    return summands;
}

vector<long long> maxPrize(long long n) {
    vector<long long> summands;
    long long k = (long long) (sqrt(1 + 8 * n) - 1) / 2;
    long long diff = n - ((k - 1) * k / 2);
    summands.reserve((k - 1));
    for (int i = 0; i < (k - 1); i++) {
        summands.push_back(i + 1);
    }
    summands.push_back(diff);
    return summands;
}


int main() {
    int n;
    std::cin >> n;
    vector<long long> summands = maxPrize(n);
    std::cout << summands.size() << '\n';
    for (int summand : summands) {
        std::cout << summand << ' ';
    }

    return 0;
}
