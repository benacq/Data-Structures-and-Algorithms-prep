#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

void reverse(char C[], int n) {
    stack<char> S;

    for (int i = 0; i < n; ++i) {
        S.push(C[i]);
    }
    for (int i = 0; i < n; ++i) {
        C[i] = S.top();
        S.pop();
    }
    printf("%s", C);
}

int main() {
    char C[51];

    printf("Enter any string: ");
    fgets(C, sizeof(C), stdin);
    reverse(C, strlen(C));
    return 0;
}
