#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

string isBalanced(string s) {
    stack <char> myStack;
    int i = 0;
    do {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') myStack.push(s[i]);
        if (myStack.empty()) return "NO";
        switch (s[i]) {
            case ')':   if (myStack.top() == '(') myStack.pop();
                        else return "NO";
                        break;
            case '}':   if (myStack.top() == '{') myStack.pop();
                        else return "NO";
                        break;
            case ']':   if (myStack.top() == '[') myStack.pop();
                        else return "NO";
                        break;
            default: break;
        }
        i++;
    } while (i <= s.size() - 1 || !myStack.empty()); // If were at the end of the string
    if (myStack.empty()) return "YES";
    else return "NO";
}



int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
