using namespace std;
#include <vector>
#include <iostream>
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int price : prices)
    {
        maxProfit = max(maxProfit, (price - minPrice));
        minPrice = min(minPrice, price);
    }
    return maxProfit;
}