class Solution {
public:
    bool canAliceWin(int n) {
        int k=0;
        int t=10;
        while(n>=t){
            n-=t;
            t--;
            k++;
        }
        return k%2==1;
    }
};