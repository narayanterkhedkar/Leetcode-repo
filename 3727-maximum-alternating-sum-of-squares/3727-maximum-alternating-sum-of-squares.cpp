class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                nums[i] *= -1;
            }
        }

        sort(nums.begin(), nums.end());

        int window = n / 2;
        long long sum = 0;

        for (int i = 0; i < window; i++) {
            sum -= 1LL * nums[i] *nums[i];
        }

        for (int i = window; i < n; i++) {
            sum += 1LL * nums[i] * nums[i];
        }

        return sum;
    }
};