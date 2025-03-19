#include<string>
#include<unordered_set>
using namespace std;

string reverseVowels(string s) {
    int left = 0, right = s.length() - 1;
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                                  'A', 'E', 'I', 'O', 'U'};
    
    while (left < right) {
        // Move left pointer until it finds a vowel
        while (left < right && vowels.find(s[left]) == vowels.end()) {
            left++;
        }
        // Move right pointer until it finds a vowel
        while (left < right && vowels.find(s[right]) == vowels.end()) {
            right--;
        }

        // Swap the vowels
        if (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}