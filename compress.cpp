#include <string>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int write = 0;  // Position to write in the array
    int i = 0;      // Iterator over input

    while (i < chars.size()) {
        char currentChar = chars[i];
        int count = 0;

        // Count consecutive occurrences of the current character
        while (i < chars.size() && chars[i] == currentChar) {
            i++;
            count++;
        }

        // Write the character
        chars[write++] = currentChar;

        // If count > 1, write its digits separately
        if (count > 1) {
            for (char c : to_string(count)) {
                chars[write++] = c;
            }
        }
    }

    return write;  // New length of compressed array
}