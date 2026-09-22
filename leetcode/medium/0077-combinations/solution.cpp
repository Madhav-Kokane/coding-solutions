class Solution {
public:
    vector<vector<int>> result;
    void soln(int i,int n,int k,vector<int>& temp){
        if(temp.size() == k){
            result.push_back(temp);
            return;
        }

        if(i>n){
            return;
        }

        temp.push_back(i);
        soln(i+1,n,k,temp);
        temp.pop_back();
        soln(i+1,n,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        soln(1,n,k,temp);
        return result;
    }
};