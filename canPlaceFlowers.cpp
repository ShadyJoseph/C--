#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{

    int size = flowerbed.size();

    for (int i = 0; i < size; i++)
    {
        if (flowerbed[i] == 0)
        {
            bool left = (i == 0) || (flowerbed[i - 1] == 0);
            bool right = (i == size - 1) || (flowerbed[i + 1] == 0);

            if (left && right)
            {
                flowerbed[i] = 1; // Plant flower
                n--;              // Reduce required flowers

                // If we planted all required flowers, return true
                if (n == 0)
                    return true;
            }
        }
    }

    return n <= 0;
}