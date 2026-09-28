class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map<char, int> x;

        for(char v : s)
            x[v]++;
        for(char z : t)
            x[z]--;
        
        for(auto& d : x) {
            if(d.second != 0)
                return false;
        }
        return true;
    }
};
