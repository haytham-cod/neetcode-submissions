class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> res;

       for(int i = 0; i < strs.size(); i++) {
            vector<int> count (26, 0);
            for(char c : strs[i])
                count[c - 'a']++;
            string key = to_string(count[0]);
            for(int j = 1; j < 26; j++)
                key += ',' + to_string(count[j]);
            
            res[key].push_back(strs[i]);
       }

       vector<vector<string>> result;
        for(pair<string, vector<string>> x : res) {
            result.push_back(x.second);
        }
        return result;
    }
};
