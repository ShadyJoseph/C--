#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false; // Lengths must match

        unordered_map<char, char> mapST, mapTS; // Maps for both directions

        for (int i = 0; i < s.length(); i++) {
            char charS = s[i], charT = t[i];

            // Check if mapping exists and is consistent
            if (mapST.count(charS) && mapST[charS] != charT) return false;
            if (mapTS.count(charT) && mapTS[charT] != charS) return false;

            // Create new mappings
            mapST[charS] = charT;
            mapTS[charT] = charS;
        }

        return true; // No conflicts found
    }
};
