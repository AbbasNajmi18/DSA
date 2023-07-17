// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int majority;
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
            if(mp[i]>(nums.size()/2)){
                majority=i;
                break;
            }
        }
        return majority;
    }
};
