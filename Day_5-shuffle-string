class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int, char>mapping;
        for(int i=0;i<s.length();i++)
        {
            mapping[indices[i]] = s[i];
        }
        string result = "";
        for(int i=0;i<s.length();i++)
        {
            result = result + mapping[i];
        }
        return result;
        
    }
};
