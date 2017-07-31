#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n, phoneNum;
    string name;
    map<string, int> phoneBook;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> phoneNum;
        phoneBook.insert(pair<string, int>(name, phoneNum));
    }
    cin.ignore();
    while (getline(cin, name)) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook[name] << endl;
        }
        else if (name.empty()) {
            break;
        }
        else {
            cout << "Not found\n";
        }
    }
    return 0;
}
