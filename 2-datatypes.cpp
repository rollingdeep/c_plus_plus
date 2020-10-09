#include <iostream>
#include <iomanip> // if setprecision(1) get error

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    cout << i << d << s << endl;

    int i2;
    double d2;
    string s2;


    string tmp;
    getline(cin, tmp);
    i2 = stoi(tmp); // string to int 

    i = i + i2;

    cout << i <<endl;

    getline(cin, tmp);
    d2 = stod(tmp); // string to double

    d = d + d2;
    // Used setprecision(1) to get at least 1 digit after decimal point, and round(d)
    cout << fixed << setprecision(1) << d << endl; 

    getline(cin, s2);
    cout << s << s2 << endl;

    return 0;

}