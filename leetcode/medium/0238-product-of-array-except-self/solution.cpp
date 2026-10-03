class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>  ltor;
        int n=nums.size();
        int prod=1;
        for(int i=0;i<n;i++){
            prod=nums[i]*prod;
            ltor.push_back(prod);
        }

        prod=1;
        vector<int> rtol(n);
        for(int i=n-1;i>=0;i--){
            prod=prod*nums[i];
            rtol[i]=prod;
        }

        vector<int> result(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                result[i]=rtol[i+1];
            }else if(i==n-1){
                result[i]=ltor[i-1];
            }else{
                result[i]=ltor[i-1]*rtol[i+1];
            }
        }
        return result;
    }
};