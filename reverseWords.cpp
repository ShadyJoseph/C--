#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());

    string result;
    for (int i = 0; i < words.size(); i++)
    {
        if (i > 0)
            result += " ";
        result += words[i];
    }
    return result;
}