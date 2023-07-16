// https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        unordered_map<int,int> mp;
        int sum=0;
        int count=0;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mp.count(rem)>0){
                count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
    }
};
