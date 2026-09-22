class Solution {
public:
    vector<vector<int>> result;
    void soln(int i, int sum, int target, vector<int>& temp,
              vector<int>& candidates) {

        if (i == candidates.size()) {
            if (sum == target) {
                result.push_back(temp);
            }
            return;
        }

        if (sum > target) {
            return;
        }

        sum += candidates[i];
        temp.push_back(candidates[i]);
        soln(i, sum, target, temp, candidates);
        sum -= candidates[i];
        temp.pop_back();
        soln(i + 1, sum, target, temp, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        // int sum=0;
        soln(0,0,target,temp,candidates);
        return result;
    }
};