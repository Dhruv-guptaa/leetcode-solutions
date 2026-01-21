// question no. 217
// name contains duplicate
// complextity O(n) 
//aproach sort then compare




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
                 if(nums[i] == nums[i+1]){
                    return true;
                 }
        }
        return false;
    }
};