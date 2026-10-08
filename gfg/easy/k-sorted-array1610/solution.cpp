class Solution {
  public:
    bool isKSortedArray(vector<int>& arr, int k) {
        unordered_map<int,int> hashMap;
        
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size();i++){
            hashMap[temp[i]]=i;
        }
        
        for(int i=0;i<arr.size();i++){
            int sortLoc=hashMap[arr[i]];
            if(abs(i-sortLoc)>k){
                return false;
            }
        }
        return true;
    }
};