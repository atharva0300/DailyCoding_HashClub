class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low  =0 ;
        int high = nums.size()-1;
        int result = binary_search(nums , target , low , high );
        return result;
    }
    
    int binary_search(vector<int>&nums , int target , int low , int high)
    {
        int mid = (low + high) /2;
        if(low > high)
        {
            return low;
        }
        else if(nums[mid]==target)
        {
            return mid;
        }
        else
        {
            if(target < nums[mid])
            {
                return binary_search(nums ,target , low , mid -1);
            }
            else
            {
                return binary_search(nums , target , mid + 1, high);
            }
        }
    }
};
