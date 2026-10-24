class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        string a = max(arriveAlice, arriveBob);
        string b = min(leaveAlice, leaveBob);
        if (a > b) {
            return 0;
        }
        int start = days(a);
        int end = days(b);
        return end - start + 1;
    }
    int days(string date) {
        vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a = stoi(date.substr(0, 2));
        int ans = stoi(date.substr(3, 2));
        for (int i = 0; i < a - 1; i++) {
            ans += month[i];
        }
        return ans;
    }
};