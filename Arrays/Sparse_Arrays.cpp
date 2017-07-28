#include <iostream>
#include <vector>

using namespace std;

int main () {
    int N, Q;
    cin >> N;
    vector <string> stringVec;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        stringVec.push_back(word);
    }
    cin >> Q;
    string query;
    for (int i = 0; i < Q; i++) {
        cin >> query;
        int numOfOccurences = 0;
        for (int j = 0; j < N; j++) {
            if (query == stringVec[j]) {
                numOfOccurences++;
            }
        }
        cout << numOfOccurences << endl;
    }
}
