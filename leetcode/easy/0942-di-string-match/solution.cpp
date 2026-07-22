class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int> nums;
        int left=0;
        int right=n;

        for(auto ch : s){
            if(ch=='I'){
                nums.push_back(left);
                left++;
            }else{
                nums.push_back(right);
                right--;
            }
        }
        nums.push_back(right);
        return nums;
    }
};