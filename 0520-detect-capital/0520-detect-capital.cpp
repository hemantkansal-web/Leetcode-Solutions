class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;

        for (char ch : word) {
            if (isupper(ch)) {
                uppercase++;
            }
        }

        return uppercase == word.length() ||                    // All uppercase
               uppercase == 0 ||                                // All lowercase
               (uppercase == 1 && isupper(word[0]));            // Only first letter uppercase
    }
};