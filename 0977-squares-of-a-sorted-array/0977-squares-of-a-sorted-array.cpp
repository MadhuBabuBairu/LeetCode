class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        vector<int> ans(n);//got run time error if used ans
        for(int i=n-1;i>=0;i--){
            if(abs(nums[left]) > abs(nums[right])){
                ans[i] = nums[left] * nums[left];
                left++;
            }
            else{
                ans[i] = nums[right] * nums[right];
                right--;
            }
        }
        return ans;
    }
};