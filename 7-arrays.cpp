#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i ++) {
        cin >> arr[i];
    }

    reverse(arr, arr + N); //首地址， 结束地址
    cout << arr << " " << arr + N << endl;

    for (int i = 0; i < N; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}