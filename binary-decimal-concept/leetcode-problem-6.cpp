#include <cmath>
class Solution {
public:
long long int ans = 0;
int i = 0;
    int reverse(int x) {
        while(x!=0) {
            int dig = x % 10;
            ans = (ans * 10) + dig;
            x = x / 10;
        }
        if(ans > pow(2,31) - 1 || ans < -pow(2,31)) {
                return 0;
            }
        return ans;
    }
};