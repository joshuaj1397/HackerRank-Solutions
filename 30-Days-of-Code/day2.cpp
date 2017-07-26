    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;


    int main() {
        int tipPercent, taxPercent;
        double mealCost, totalCost;

        cin >> mealCost;
        cin >> tipPercent;
        cin >> taxPercent;
        totalCost = mealCost + (mealCost * ((double)taxPercent/100)) + (mealCost * ((double)tipPercent/100));
        totalCost = round(totalCost);
        cout << "The total meal cost is " << totalCost << " dollars.";
        return 0;
    }
