#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q, index, queryType, x, y;
    cin >> N >> Q;
    vector<vector <int> > seqList(N);
    vector <int> seq;
    int i = 0, lastAnswer = 0;
    for (int i = 0; i < N; i++) {
        seqList.push_back(seq);
    }
    i = 0;
    while (i < Q) {
        cin >> queryType >> x >> y;
        index = (x ^ lastAnswer) % N;
        if (queryType == 1) {
            seqList[index].push_back(y);
        }
        else if (queryType == 2) {
            lastAnswer = seqList[index].at(y % seqList[index].size());
            cout << lastAnswer << endl;
        }
        i++;
    }
}
