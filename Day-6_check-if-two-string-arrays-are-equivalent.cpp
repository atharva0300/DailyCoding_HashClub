class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1 = "";
        string result2 = "";
        for(int i=0;i<word1.size();i++){
            result1 = result1 + word1[i];
        }
        for(int i=0;i<word2.size();i++){
            result2 = result2 + word2[i];
        }
        return (result1==result2);
    }
};
