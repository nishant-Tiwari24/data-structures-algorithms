class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int n = num;
        if(num == 0) {
            return 1;
        }

        while(n != 0) {
            mask = (mask << 1) | 1;
            n = n >> 1;
        }

        int ans = (~num) & mask;
        return ans;
    }
    
};