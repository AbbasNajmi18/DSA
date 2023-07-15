// https://leetcode.com/problems/subarray-sum-equals-k/submissions/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        unordered_map<int,int> prefix;
        int sum=0;
        int count=0;
        prefix[0]++;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           if(prefix[sum-k]>0){
               count+=prefix[sum-k];
           }
           prefix[sum]++;

        }
        return count;
    }
};
