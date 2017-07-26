#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int myInt;
    double myDouble;
    string myString;
    cin >> myInt;
    cin >> myDouble;
    cin.ignore();
    getline(cin, myString);

    cout << myInt + i << endl;
    cout << fixed << setprecision(1) << myDouble + d << endl;
    cout << s << myString << endl;

    return 0;
}
