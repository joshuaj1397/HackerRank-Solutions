#include <iostream>

using namespace std;

int main() {
    int numOfItems;
    cin >> numOfItems;
    int arr[numOfItems];

    for (int i = 0; i < numOfItems; i++) {
        cin >> arr[i];
    }

    for (int i = numOfItems-1; i > -1; i--) {
        cout << arr[i] << " ";
    }
}
