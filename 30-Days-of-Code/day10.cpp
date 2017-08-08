#include <iostream>
#include <vector>

using namespace std;

int main () {
    int count = 0, maxNum = 0, n, r;
    vector <int> list;
    cin >> n;

    do {
        r = n % 2;
        n/=2;
        list.push_back(r);
    } while (n > 0);

    for (int i = 0; i < list.size(); i++) {
        while (list[i] == 1) {
            count++;
            i++;
        }
        if (count >= maxNum) {
            maxNum = count;
        }
        count = 0;
    }
    cout << maxNum;
}
