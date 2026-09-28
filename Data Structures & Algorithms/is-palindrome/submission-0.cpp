class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        for(char c : s){
            c = tolower(c);
            if(c <= 'z' && c >= 'a' || c >= '0' && c <= '9')
                word += c;
        }
        int left = 0, right = word.length() - 1;
        while(left < right) {
            if(word[left] != word[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
