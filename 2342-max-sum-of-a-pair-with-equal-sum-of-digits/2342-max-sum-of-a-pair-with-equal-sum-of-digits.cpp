
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;

        int ans = -1;

        for (int num : nums) {
            int sum = digitSum(num);

            if (mp.find(sum) != mp.end()) {
                ans = max(ans, num + mp[sum]);
            }

            mp[sum] = max(mp[sum], num);
        }

        return ans;
    }
};
