class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEle=-1;
        int n=arr.size();
        vector<int> result(n);
        for(int i=n-1;i>=0;i--){

            result[i]=maxEle;
            if(arr[i] > maxEle){
                maxEle=arr[i];
            }
        }

        return result;
    }
};