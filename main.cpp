#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices);

int main()
{

    cout << "hello mr shady \n";
    int x;
    cout << "hello mr shady \n";
    cin>>x;
    cout << x<< "\n";

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