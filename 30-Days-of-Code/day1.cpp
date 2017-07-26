#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int myInt;
    cin >> myInt;
    double myDouble;
    string myString;
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    cin >> myInt;
    cin >> myDouble;
    getline(cin, myString);

    cout << myInt + i << endl;
    cout << setprecision(1) << myDouble + d << endl;
    cout << s << myString << endl;
    return 0;
}
