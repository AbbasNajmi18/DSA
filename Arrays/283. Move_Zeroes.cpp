// https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int end=nums.size();
        int zero=0;
        int start=0;
        while(start<end){
            if(nums[start]!=0){
                swap(nums[start],nums[zero]);
                zero++;
            }
            start++;
        }
    }
};
