class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int ,int> hasmpp;
        for(int i=0;i<n;i++){
            int left = target - nums[i];
            if(hasmpp.find(left)!= hasmpp.end()){
                return {hasmpp[left],i};
            }
            hasmpp[nums[i]] = i;
        }
        return {};
    }
};