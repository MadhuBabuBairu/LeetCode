class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        vector<int> ans;

        while(i<j){
            int sum = numbers[i] + numbers[j] ;
            if(sum == target){
                ans.push_back(i+1);// because 1 base indexing
                ans.push_back(j+1);
                i++; j--;
            }
            else if(sum > target) j--;
            else i++;
        }
        return ans;
    }
};