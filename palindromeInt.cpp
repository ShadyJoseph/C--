#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x)
{
    string s = to_string(x);
    string rev = s;
    reverse(s.begin(), s.end());
    return s == rev;
}