#include <iostream>

using namespace std;

int main () {
    int n, d;
    cin >> n >> d;
    int arr[n], newArr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int newIndex;
        if (i - d > 0) {
            newIndex = i - d;
        }
        else if (i - d == 0) {
            newIndex = 0;
        }
        else {
            newIndex = (i - d) + n;
        }
        newArr[newIndex] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << newArr[i] << " ";
    }
}
