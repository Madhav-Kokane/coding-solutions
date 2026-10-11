class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        /*
        unordered_set<int> hashSet;
        for(auto it : special){
            hashSet.insert({it});
        }

        int maxCon=0;
        int count=0;

        for(int i=bottom;i<=top;i++){
            if(hashSet.find(i)!=hashSet.end()){
                count=0;
            }else{
                count++;
                maxCon=max(maxCon,count);
            }
        }
        return maxCon;
        */

        sort(special.begin(),special.end());
        int maxAns=0;
        maxAns=max(maxAns,special[0]-bottom);

        int n=special.size();
        for(int i=1;i<n;i++){
            maxAns=max(maxAns,special[i]-special[i-1]-1);
        }

        maxAns=max(maxAns,abs(top-special[n-1]));
        return maxAns;
    }
};