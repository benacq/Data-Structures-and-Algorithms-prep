#include <iostream>
#include <vector>

using namespace std;

/*In this problem, your goal is to compute Fn modulo m, where n may be really huge: up to 10 14 . For such
values of n, an algorithm looping for n iterations will not fit into one second for sure. Therefore we need to
avoid such a loop.
To get an idea how to solve this problem without going through all Fi for i from 0 to n, let’s see what
happens when m is small — say, m = 2 or m = 3

I	        0	1	2	3	4	5	6	7	8	9	10	11
Fi	        0	1	1	2	3	5	8	13	21	34	55	89
Fi mod 2	0	1	1	0	1	1	0	1	1	0	1	1
Fi mod 3	0	1	1	2	0	2	2	1	0	1	1	2

Take a detailed look at this table. Do you see? Both these sequences are periodic! For m = 2, the period
is 011 and has length 3, while for m = 3 the period is 01120221 and has length 8. Therefore, to compute,
say, F 2015 mod 3 we just need to find the remainder of 2015 when divided by 8. Since 2015 = 251 · 8 + 7, we
conclude that F2015 mod 3 = F7 mod 3 = 1.
This is true in general: for any integer m ≥ 2, the sequence F n mod m is periodic. The period always
starts with 01 and is known as Pisano period.
 */


unsigned long long int fibModNaive(vector<unsigned long long int> nums) {
    unsigned long long int n = nums[0];
    unsigned long long int m = nums[1];
    unsigned long long int fibCached[n];
    fibCached[0] = 0;
    fibCached[1] = 1;

    for (uint64_t i = 2; i <= n; ++i) {
        fibCached[i] = fibCached[i - 1] + fibCached[i - 2];
    }

    return (fibCached[n]) % m;
}


unsigned long long fibModuloEfficient(vector<unsigned long long int> nums) {
    unsigned long long int n = nums[0];
    unsigned long long int m = nums[1];

    unsigned long long int fibModulo = 0;
    unsigned long long int fibModPisano[m * m];
    fibModPisano[0] = 0;
    fibModPisano[1] = 1;
    for (int i = 2; i <= m * m; ++i) {
        fibModPisano[i] = (fibModPisano[i - 1] + fibModPisano[i - 2]) % m;
        if (fibModPisano[i] == 1 && fibModPisano[i - 1] == 0) {
            fibModulo = fibModPisano[n % (i - 1)];
            break;
        }
    }
    return fibModulo;
}

void stressTesting() {
    while (true) {
        int n = 2;
        vector<unsigned long long int> a(2);
        for (int i = 0; i < n; ++i) {
            a.push_back(random() % 110);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";

        unsigned long long int res1 = fibModuloEfficient(a);
        unsigned long long int res2 = fibModNaive(a);

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        } else {
            cout << "OK\n";
        }
    }
}

int main() {
    int n = 2;
    vector<unsigned long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    std::cout << fibModuloEfficient(numbers) << std::endl;
    return 0;
}
