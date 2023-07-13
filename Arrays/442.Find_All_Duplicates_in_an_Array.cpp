// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        set<int>s;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                ans.push_back(nums[i]);
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};
