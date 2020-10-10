#include <iostream>

using namespace std;

int main() {

    while(true) {
        string str;
        cin >> str;
        
        try {
            int num = stoi(str);
            cout << num << endl;
        } catch(...) {
            cout << "bad string!" << endl;
        }
    
    }
    return 0;
}