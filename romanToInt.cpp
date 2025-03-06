#include <unordered_map>
#include <string>
using namespace std;

    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();

        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        for (int i = 0; i < n; i++) {
            // Ensure we don't access out of bounds
            if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                sum -= romanMap[s[i]];
            } else {
                sum += romanMap[s[i]];
            }
        }

        return sum;
    }
