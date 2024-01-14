class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr = 0, sc = 0;
        int er = matrix.size() - 1;
        int ec = matrix[0].size() - 1;

        int count = 0;
        vector<int> ans;

        while (count < (matrix.size() * matrix[0].size())) {
            for (int i = sc; i <= ec && count < (matrix.size() * matrix[0].size()); i++) {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;

            for (int i = sr; i <= er && count < (matrix.size() * matrix[0].size()); i++) {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;

            for (int i = ec; i >= sc && count < (matrix.size() * matrix[0].size()); i--) {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;

            for (int i = er; i >= sr && count < (matrix.size() * matrix[0].size()); i--) {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }

        return ans;
    }
};
