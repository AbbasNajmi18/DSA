// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         ios_base::sync_with_stdio(false);
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        int left;
        int right;
    for(int i=0;i<nums.size()-1;i++){
                left=i+1;
                right=nums.size()-1;
                while(left<right){
                    if((nums[i]+nums[left]+nums[right])==0){
                        s.insert({nums[i],nums[left],nums[right]});
                        left++,right--;
                    }
                    else if((nums[i]+nums[left]+nums[right])>0){
                        right--;
                    }
                    else left++;
                }
                }
        for(auto &i:s){
            ans.push_back(i);
        }
        return ans;
    }
};
