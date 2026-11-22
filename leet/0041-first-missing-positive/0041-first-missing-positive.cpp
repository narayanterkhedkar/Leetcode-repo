class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>map;
        for(int i=0;i<nums.size();i++){
            map.insert(nums[i]);
        }

        for(int i=1;i<=nums.size()+1;i++){
            if(!map.count(i)){
                return i;
            }
        }
        return 1;
    }
};