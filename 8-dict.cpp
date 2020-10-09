#include <map>
#include <iostream>

using namespace std;

int main() {
    int N; //存储次数，同名跳过
    string name;
    cin >> N;

    map<string, int> phone_book;

    for (int i = 0; i < N; i ++) {
        cin >> name;
        if (!phone_book[name]) {
            cin >> phone_book[name];
        } else {
            cout << name << " is exist. skip" << endl;
        }
    }

    while (cin>>name) {
        if (phone_book[name]) cout << name << " = " << phone_book[name] << endl;
        else cout << name << " Not Found." << endl;
    }
    return 0;
}


