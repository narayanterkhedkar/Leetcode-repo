class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;
        int k = 0;
        while (j < chars.size()) {
            int temp = 0;
            char ch = chars[j];
            while (j < chars.size() && ch == chars[j]) {
                j++;
                temp++;
            }
            chars[k++] = ch;
            if (temp > 1) {
                string s = to_string(temp);
                for (int a = 0; a < s.length(); a++) {
                    chars[k++] = s[a];
                }
            }
            i = j;
        }
        return k;
    }
};