class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> ans(2);
        ans[0]=-1;
        ans[1]=-1;
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=i+indexDifference;j<n;j++){
                if(abs(nums[i]-nums[j])>=valueDifference){
                    ans[0]=i;
                    ans[1]=j;
                    flag=true;
                    break;
                    
                }
            }
            if(flag){
                break;
            }
        }
        return(ans);
    }
};