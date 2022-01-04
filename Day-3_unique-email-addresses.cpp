/* SOLUTION 1 -------------------------------------------- */ 
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

/* SOLUTION 2 ------------------------------------------------------------ */ 
class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		set<string>ans;
		for(string email:emails){
			stringstream s(email);
			string local,domain,buffer;

			int i=0;
			while(getline(s,buffer,'@')){
				if(i==0){
					local=buffer;
					i++;
				}else{
					domain=buffer;
				}
			}
			string res;

			for(char c: local){
				if(c=='.'){
					continue;
				}else if(c=='+'){
					break;
				}else{
					res+=c;
				}
			}
			ans.insert(res+"@"+domain);
				// cout<<res+domain<<" ";
		}

		return ans.size();

	}
};
