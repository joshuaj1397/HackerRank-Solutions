#include <iostream>

using namespace std;

int main() {
    int arr[6][6];
    int maxSum = -63;
    int sum;
    // input
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int top = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            int shaft = arr[i+1][j+1];
            int bottom = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            sum = top + shaft + bottom;
            if (sum > maxSum)
                maxSum = sum;
        }
    }
    cout << maxSum;
}
