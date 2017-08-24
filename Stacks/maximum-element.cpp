#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <limits.h>
using namespace std;

class Node {
    public:
        int val;
        int max;
        Node (int val, int max) {
            this->val = val;
            this->max = max;
        }
};

int main() {
    int type, x, N, max = INT_MIN;
    cin >> N;
    stack <Node> myStack;
    for (int i = 0; i < N; i++) {
        cin >> type;
        switch (type) {
            case 1: cin >> x;
                    if (x > max) max = x;
                    myStack.push(Node (x, max));
                    break;
            case 2: if (myStack.empty()) cout << "Stack Empty";
                    else {
                        myStack.pop();
                        if (myStack.empty()) max = INT_MIN;
                        else max = myStack.top().max;
                    }
                    break;
            case 3: if (myStack.empty()) cout << "Stack Empty";
                    else cout << myStack.top().max << endl;
                    break;
            default: cout << "Invalid input\n";
        }
    }
}
