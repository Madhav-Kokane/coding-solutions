class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int n=nums.size();
        vector<int> preProd;
        for(auto it:nums){
            prod=prod*it;
            preProd.push_back(prod);
        }


        vector<int> sufProd(n);
        prod=1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            sufProd[i]=prod;
        }

        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(i==0){
                result[i]=sufProd[i+1];
            }else if(i==n-1){
                result[i]=preProd[n-2];
            }else{
                result[i]=preProd[i-1]*sufProd[i+1];
            }
            
        }
        return result;

    }
};