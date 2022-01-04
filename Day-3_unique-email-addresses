class Solution {
public:
    // This function returns the email id after appyling rules on it
    string filter(string &s)
    {
        int i=0;
        string tmp="";
        while(i<s.length() && s[i]!='@' && s[i]!='+')
        {
            if(s[i]!='.')
            {
                tmp.push_back(s[i]);
            }
            i++;
        }
        while(i<s.length() && s[i]!='@')
        {
            i++;
        }
        return tmp+"@"+s.substr(i+1);
    }
    int numUniqueEmails(vector<string>& emails) {
        // dict will store unique email addresses
        unordered_set<string>dict;
        for(int i=0;i<emails.size();i++)
        {
            string tmp=filter(emails[i]);
            dict.insert(tmp);
        }
        
        return dict.size();
    }
};
