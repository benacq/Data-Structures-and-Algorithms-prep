#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maxAdsRevenue(vector<long long> profitPerClick, vector<long long> avgNumClick) {
    long long maxRev = 0;
    sort(profitPerClick.begin(), profitPerClick.end(), greater<>());
    sort(avgNumClick.begin(), avgNumClick.end(), greater<>());
    for (int i = 0; i < profitPerClick.size(); ++i) {
        maxRev +=  profitPerClick[i] * avgNumClick[i];
    }
    return maxRev;
}


int main() {
    int n;
    cin >> n;
    vector<long long> profitPerClick(n);
    vector<long long> avgNumClick(n);
    for (long long &i : profitPerClick) {
        cin >> i;
    }
    for (long long &i : avgNumClick) {
        cin >> i;
    }

    std::cout << maxAdsRevenue(profitPerClick, avgNumClick) << std::endl;
    return 0;
}
