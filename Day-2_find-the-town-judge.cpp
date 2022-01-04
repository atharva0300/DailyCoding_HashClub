/*  SOLUTION 1 ----------------------------------------------------------- */
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int , int > a;
    if(n==1) return 1;
    map<int , int >b;
    for(int i=0 ; i<trust.size() ; i++)
    {
        a[trust[i][0]]++;
    }
    for(int i=0 ; i<trust.size() ; i++)
    {
        b[trust[i][1]]++;
    }
    for(int i= 0 ; i<=n ; i++)
    {
        if(a[i]==0 && b[i]==n-1)
            return i;
    }
    return -1;
        
    }
};

/* SOLUTION 2 ----------------------------------------------------------------- */
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty() && n == 1)
        {
            return 1;
        }

        int peopletrust[1005] = {0};
        for(int i = 0; i < trust.size(); i++){
            peopletrust[trust[i][1]]++;
            peopletrust[trust[i][0]]--;
        }
        for(int i = 1; i <= n; i++){
            if(peopletrust[i] == n - 1)
                return i;
        }
        return -1;
    }      
};
