#include <string>
#include <unordered_set>
using namespace std;

int maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    // Count vowels in the first window
    for (int i = 0; i < k; ++i) {
        if (vowels.count(s[i])) {
            count++;
        }
    }

    int maxCount = count;

    // Slide the window
    for (int i = k; i < s.length(); ++i) {
        if (vowels.count(s[i])) {
            count++;
        }
        if (vowels.count(s[i - k])) {
            count--;
        }
        maxCount = max(maxCount, count);
    }

    return maxCount;
}