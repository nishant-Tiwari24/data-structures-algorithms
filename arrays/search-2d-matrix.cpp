class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int col = matrix[0].size();
        int e = (matrix.size() * matrix[0].size()) - 1;
        int m = s + (e-s)/2;
        
        while(s<=e) {
            int ele = matrix[m/col][m%col];
            if(ele == target)
                return 1;
            else if(target < ele)
                e = m - 1;
            else
                s = m + 1;
            m = s + (e-s)/2;
        }
        return 0;      
    }
};