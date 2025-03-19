#include <iostream>
#include <string>
#include <numeric>  // For std::gcd

using namespace std;

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1)  // Step 1: Check if common divisor exists
        return "";

    int gcdLen = gcd(str1.size(), str2.size());  // Step 2: Find GCD of lengths
    return str1.substr(0, gcdLen);  // Step 3: Return substring of length GCD
}

int main() {
    cout << gcdOfStrings("ABCABC", "ABC") << endl;  // Output: "ABC"
    cout << gcdOfStrings("ABABAB", "ABAB") << endl; // Output: "AB"
    cout << gcdOfStrings("LEET", "CODE") << endl;   // Output: ""

    return 0;
}
