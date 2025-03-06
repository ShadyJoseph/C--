#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices);

int main()
{

    cout << "hello mr shady \n";
    vector<int> prices={7,1,5,3,6,4};
    int max=maxProfit(prices);
    cout<<max<<"\n";
    return 0;
}

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