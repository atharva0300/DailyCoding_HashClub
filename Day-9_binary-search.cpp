class Solution {
public:
    int binary_search(vector<int>&nums, int target , int low , int high)
    {
        int mid = (high + low)/2;
        if(low > high)
        {
            return -1;
        }
        
        else if(nums[mid]==target)
        {
            return mid;
        }
        else 
        {
            if(target < nums[mid])
            {

                return binary_search(nums , target , low , mid-1);
            }
            else 
            {
                return binary_search(nums , target , mid + 1 , high);
            }   
        }
    }
    
    int search(vector<int>& nums, int target) {
        
        sort(nums.begin() ,  nums.end());
        int high = nums.size()-1;
        int low =0;
        int result = binary_search(nums , target, low , high);
        return result;
        
    }
};
