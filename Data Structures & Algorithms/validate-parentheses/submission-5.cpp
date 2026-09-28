class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                x.push(s[i]);
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(x.empty())
                    return false;
                if ((x.top() == '(' && s[i] != ')') ||
                    (x.top() == '[' && s[i] != ']') ||
                    (x.top() == '{' && s[i] != '}'))
                    return false;
                x.pop();
            }
            else
                return false;
        }
        return x.empty();
    }
};
