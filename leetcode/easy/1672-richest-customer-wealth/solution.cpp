class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rowSize = accounts.size();
        int colSize = accounts[0].size();

        int maxWealth = INT_MIN;
        for (int i = 0; i < rowSize; i++) {
            int sumn = 0;
            for (int j = 0; j < colSize; j++) {
                sumn += accounts[i][j];
            }
            maxWealth = max(maxWealth, sumn);
        }

        return maxWealth;
    }
};