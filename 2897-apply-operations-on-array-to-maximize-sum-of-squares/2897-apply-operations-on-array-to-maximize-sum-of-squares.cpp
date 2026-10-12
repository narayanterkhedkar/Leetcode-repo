class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        long long mod = 1000000007LL;
        long long fre[32] = {0};

        for (int n : nums) {
            for (int i = 0; i < 32; i++) {
                if (n & (1LL << i)) {
                    fre[i]++;
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            long long num = 0;
            for (int i = 0; i < 32; i++) {
                if (fre[i] > 0) {
                    num |= (1LL << i);
                    fre[i]--;
                }
            }
            ans = (ans + num * num) % mod;
        }
        return int(ans);
    }
};