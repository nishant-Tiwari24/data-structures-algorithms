#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    if(nStairs < 0) return 0;
    if(nStairs == 0)return 1;
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}