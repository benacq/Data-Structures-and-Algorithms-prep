#include <iostream>


unsigned long long pisanoNaive(unsigned long long m) {
    unsigned long long fibMod[m * m];
    fibMod[0] = 0;
    fibMod[1] = 1;
    for (unsigned long long i = 2; i < m * m; ++i) {
        fibMod[i] = (fibMod[i - 1] + fibMod[i - 2]) % m;
        if (fibMod[i] == 1 && fibMod[i - 1] == 0) {
            return i - 1;
        }
    }
}


unsigned long long pisanoEfficient(unsigned long long m) {
    unsigned long long a = 0, b = 1, c;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

int main() {
    std::cout << pisanoNaive(1000) << std::endl;
    std::cout << pisanoEfficient(1000) << std::endl;
    return 0;
}
