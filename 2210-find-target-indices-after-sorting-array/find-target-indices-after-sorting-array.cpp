// name :- find target indices after sorting array
// approach :-- sort = linear scan
// complexity :-- O(n^2)


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        vector<int> ans;
        for(int i = 0  ;i<nums.size();i++){
            if(nums[i]== target){
              ans.push_back(i);
            }
        }
        return ans;
    }
};