class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if (num * 9 < sum) {
            return "";
        }
        while (sum >= 9) {
            ans += '9';
            sum -= 9;
        }
        if (sum > 0) {
            ans += to_string(sum);
        }
        if (num > ans.length()) {
            while (num > ans.length()) {
                ans += '0';
            }
        }

        return ans;
    }
};