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
