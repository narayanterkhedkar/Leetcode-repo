class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++){
            m=min(nums[i],m);
        }
        for(int n : nums){
            count+=n-m;
        }
        return count;
    }
};