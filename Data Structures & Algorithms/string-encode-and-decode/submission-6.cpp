class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for(string& str : strs) {
            encoded_string += to_string(str.length()) + "#" + str; 
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;

        //3$abc3$xyz
        int a = 0;
        while(a < s.length()) {
            int i = a;
            while(s[i] != '#') {
                i++;
            }
            string number = s.substr(a, i);
            // "3"
            int length = stoi(number);
            // 3
            i++;
            string word = s.substr(i, length);
            decoded_strs.push_back(word);
            
            i += length;
            a = i;
        }

        return decoded_strs;
        
    }
};