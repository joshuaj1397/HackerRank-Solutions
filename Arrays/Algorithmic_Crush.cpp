#include <iostream>
#include <vector>

using namespace std;

int main () {
    long int N, M, a, b, k, maxNum = 0;
    cin >> N >> M;
    vector <unsigned long long int> list(N, 0);
    for (long int i = 0; i < M; i++) {
        cin >> a >> b >> k;
        for (int index = a - 1; index < b; index++) {
            list[index] += k;
            if (list[index] > maxNum)
                maxNum = list[index];
        }
    }
    cout << maxNum;
}
