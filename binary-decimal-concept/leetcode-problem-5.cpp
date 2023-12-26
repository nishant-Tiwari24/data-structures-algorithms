#include <cmath>
class Solution {
public:
int ans = 0;
int i = 0;
    
    int bitwiseComplement(int n) {
        if(n == 0) {
        return 1;
        }

        while(n!=0) {

            int bit = n & 1;
            if(bit == 1) {
                bit = 0;
            }
            else if(bit == 0){
                bit = 1;
            }

            if(bit == 1){
            ans = pow(2,i) + ans;
            }
            n = n>>1;
            i++;
        }
        return ans;

    }
};