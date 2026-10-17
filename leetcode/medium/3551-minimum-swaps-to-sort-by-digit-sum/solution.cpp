class Solution {
public:

    int sumOfDigit(int n){
        int sum=0;
        while(n>9){
            int rem=n%10;
            n=n/10;
            sum+=rem;
        }
        return sum+n;
    }
    int minSwaps(vector<int>& nums) {
        // vector<int> numSum;
        int n=nums.size();
        vector<tuple<int,int,int>> arr;

        for(int i=0;i<n;i++){
            int sumn=sumOfDigit(nums[i]);
            arr.push_back({sumn,nums[i],i});
        }

        sort(arr.begin(),arr.end());
        vector<bool> visited(n,false);
        int swaps=0;

        for(int i=0;i<n;i++){
            if(visited[i] || get<2>(arr[i])==i){
                continue;
            }

            int j=i;
            int cycleSize=0;
            while(!visited[j]){
                visited[j]=true;
                j=get<2>(arr[j]);
                cycleSize++;
            }

            if(cycleSize>1){
                swaps+=cycleSize-1;
            }
        }
        return swaps;

    }
};