#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

bool wordPattern(string pattern, string s)
{
    unordered_map<char, string> charStringMap;
    unordered_map<string, char> stringCharMap;
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        words.push_back(word);
    }
    if (pattern.length() != words.size())
        return false;

    for (int i = 0; i < pattern.length(); i++)
    {
        char ch = pattern[i];
        string word = words[i];

        if (charStringMap.count(ch))
        {
            if (charStringMap[ch] != word)
                return false; // Mismatch
        }
        else
        {
            charStringMap[ch] = word;
        }

        if (stringCharMap.count(word))
        {
            if (stringCharMap[word] != ch)
                return false; // Mismatch
        }
        else
        {
            stringCharMap[word] = ch;
        }
    }

    return true;
}