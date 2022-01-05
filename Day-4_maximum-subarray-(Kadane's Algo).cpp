class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int m = INT_MIN;
        for(auto it : nums)
        {
            sum = sum + it;
            m = max(sum, m);
            if(sum<0)
            {
                sum =0;
            }
        }
        return m;
    }
};
