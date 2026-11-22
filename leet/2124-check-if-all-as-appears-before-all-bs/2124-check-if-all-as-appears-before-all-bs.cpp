class Solution {
public:
    bool checkString(string s) {
        int b = -1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'b') {
                b = i + 1;
                break;
            }
        }
        if (b == -1) {
            return true;
        }
        for (int i = b; i < s.length(); i++) {
            if (s[i] == 'a') {
                return false;
            }
        }
        return true;
    }
};