class Solution {
public:
    int maxProduct(int n) {
        /*
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
*/
        string str=to_string(n);
        int len1=str.size();
        sort(str.begin(),str.end());
        return (str[len1-1]-'0')*(str[len1-2]-'0');

    }
};