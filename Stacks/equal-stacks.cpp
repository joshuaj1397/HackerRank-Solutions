#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void equalizeStacks (vector <vector <int>> stack) {

  vector <int> stackSum = {0, 0, 0};

  // Sum all stacks initially in O(n) for each stack
  for (int i = 0; i < stackSum.size(); i++) {
    for (int j = 0; j < stack[i].size(); j++) {
      stackSum[i] += stack[i][j];
    }
  }

  // Decrement the stack with the greatest sum until are stacks are equal
  while (!(stackSum[0] == stackSum[1] && stackSum[1] == stackSum[2])) {

    // Find which stack is the greatest, decrement its sum by the last element
    // in the stack then pop that element (which is a cylinder).
    if (stackSum[0] >= stackSum[1] && stackSum[0] >= stackSum[2]) {
      stackSum[0] -= stack[0].front();
      stack[0].erase(stack[0].begin());
    } else if (stackSum[1] >= stackSum[0] && stackSum[1] >= stackSum[2]) {
      stackSum[1] -= stack[1].front();
      stack[1].erase(stack[1].begin());
    } else if (stackSum[2] >= stackSum[1] && stackSum[2] >= stackSum[0]) {
      stackSum[2] -= stack[2].front();
      stack[2].erase(stack[2].begin());
    }

  }

  cout << stackSum[0];
}

int main(){
  int n1;
  int n2;
  int n3;
  cin >> n1 >> n2 >> n3;
  vector<int> h1(n1);
  for(int h1_i = 0;h1_i < n1;h1_i++){
    cin >> h1[h1_i];
  }
  vector<int> h2(n2);
  for(int h2_i = 0;h2_i < n2;h2_i++){
    cin >> h2[h2_i];
  }
  vector<int> h3(n3);
  for(int h3_i = 0;h3_i < n3;h3_i++){
    cin >> h3[h3_i];
  }

  vector <vector <int>> stacks = {h1, h2, h3};
  equalizeStacks(stacks);
  return 0;
}
