// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
            }
        }
        return ans;
    }
};
