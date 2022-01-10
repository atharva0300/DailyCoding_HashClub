class Solution {
public:
    int trap(vector<int>& height) {
        int h=height.size();
        vector<int>left(h,0);
        vector<int>right(h,0);
        
        int temp=0;
        int result=0;
        for(int i=0; i<h;i++){
            temp=max(temp,height[i]);
            left[i]=temp;
        }
        temp=0;
        for(int j=h-1;j>=0;j--){
            temp=max(temp,height[j]);
            right[j]=temp;
        }
        
        for(int i=1; i<h-1;i++){
            int temp=min(left[i-1],right[i+1])-height[i];
            if(temp>0){
                result+=temp;
            }
        }
        return result;
    }
};
