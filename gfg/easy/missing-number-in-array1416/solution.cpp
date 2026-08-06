class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        unordered_set<int> hashSet;
        for(auto it:arr){
            hashSet.insert({it});
        }
        
        int n=arr.size();
        for(int i=1;i<=n+1;i++){
            if(hashSet.find(i) == hashSet.end()){
                return i;
            }
        }
        return -1;
    }
};