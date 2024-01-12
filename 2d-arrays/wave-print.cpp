#include <vector>

std::vector<int> wavePrint(std::vector<std::vector<int>> arr, int nRows, int mCols) {
    std::vector<int> ans;
    for (int i = 0; i < mCols; i++) {
        if (i & 1) {
            // If i is odd, go from bottom to top
            for (int j = nRows - 1; j >= 0; j--) {
                ans.push_back(arr[j][i]);
            }
        } else {
            // If i is even, go from top to bottom
            for (int j = 0; j < nRows; j++) {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}
