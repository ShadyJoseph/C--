#include <vector>
#include <algorithm>
using namespace std;
vector<bool> kidsWithCandies(int extra, vector<int> &candies)
{
    int maxCandy = *max_element(candies.begin(), candies.end());
    vector<bool> result;
    for (int candy : candies)
    {
        result.push_back(candy+extra>=maxCandy);
    }

    return result;
}