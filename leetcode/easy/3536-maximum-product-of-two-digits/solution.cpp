class Solution {
public:
    int maxProduct(int n) {
        string str=to_string(n);
        vector<int> nums;


        
        while(n>9){
            int temp=n%10;
            nums.push_back(temp);
            n=n/10;
        }
        nums.push_back(n);

        sort(nums.begin(),nums.end());
        int len=nums.size();
        return nums[len-1]*nums[len-2];
    }
};