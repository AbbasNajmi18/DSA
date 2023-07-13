// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    unordered_set<int> ans;

    int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
