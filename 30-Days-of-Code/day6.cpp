#include <iostream>

using namespace std;

int main () {
    int T;
    string myString;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> myString;
        for (int j = 0; j < myString.size(); j+=2) {
            cout << myString[j];
        }
        cout << " ";
        for (int j = 1; j < myString.size(); j+=2) {
            cout << myString[j];
        }
        cout << endl;
    }
}
