#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for(char task : tasks){
            freq[task - 'A']++;
        }
        sort(begin(freq), end(freq), greater<int>());
        int chunk = freq[0] - 1;
        int idle = chunk * n;

        for(int i = 1; i < 26 && freq[i] > 0; i++){
            idle -= min(chunk, freq[i]);
        }

        return idle < 0 ? tasks.size() : tasks.size() + idle;
    }
};

int main() {
    // Input
    int taskCount, n;
    cin >> taskCount;
    vector<char> tasks(taskCount);
    for (int i = 0; i < taskCount; i++) {
        cin >> tasks[i];
    }
    cin >> n;
    
    Solution solution;
    int minInterval = solution.leastInterval(tasks, n);
    
    // Output
    cout << "Minimum interval: " << minInterval << endl;
    
    return 0;
}
