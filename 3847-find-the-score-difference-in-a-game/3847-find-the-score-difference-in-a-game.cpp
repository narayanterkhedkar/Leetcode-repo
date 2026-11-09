class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first = 0;
        int second = 0;
        bool who = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1) {
                if (who == false) {
                    who = true;
                } else {
                    who = false;
                }
            }
            if ((i + 1) % 6 == 0) {
                if (who == false) {
                    who = true;
                } else {
                    who = false;
                }
            }
            if (!who) {
                first += nums[i];
            } else {
                second += nums[i];
            }
        }
        return first - second;
    }
};