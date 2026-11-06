class Solution {
public:
    int findComplement(int num) {
        string ans = "";
        while (num > 0) {
            if (num % 2 == 1) {
                ans += '1';
            } else {
                ans += '0';
            }
            num /= 2;
        }
        reverse(ans.begin(), ans.end());
        for (char& ch : ans) {
            if (ch == '1') {
                ch = '0';
            } else {
                ch = '1';
            }
        }
        int res = stoi(ans, nullptr, 2);
        return res;
    }
};