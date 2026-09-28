class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        for(char c : s) {
            if(isalnum(c))
                word += tolower(c);
        }

        return word == string(word.rbegin(), word.rend());
    }
};
