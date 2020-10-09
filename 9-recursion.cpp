#include <iostream>

using namespace std;

// 阶乘
int factorial(int n) { 
    if (n == 1) return 1;
    return factorial(n - 1) * n;
}

int main() {
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}