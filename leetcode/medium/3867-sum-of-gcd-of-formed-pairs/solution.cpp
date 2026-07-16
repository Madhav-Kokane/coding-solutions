class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int maxNum = nums[0];
        int n = nums.size();
        vector<int> prefixGcd(n);
        for (int i = 0; i < n; i++) {
            int temp=0;
            maxNum = max(maxNum, nums[i]);
            if (maxNum > nums[i]) {
                 temp = gcd(maxNum, nums[i]);
            } else {
                 temp = gcd(nums[i], maxNum);
            }
            prefixGcd[i] = temp;
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sumOfGcd = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int temp = gcd(prefixGcd[left], prefixGcd[right]);
            sumOfGcd += temp;
            left++;
            right--;
        }
        return sumOfGcd;
    }
};