class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*
        //BRUTE FORCE
        int m=nums1.size();
        int n=nums2.size();
        double sum1=0,sum2=0;
        for(int i=0;i<m;i++){
            sum1+=nums1[i];
        }
        for(int i=0;i<n;i++){
            sum2+=nums2[i];
        }

        int totalSize=m+n;
        double ans=(sum1+sum2)/totalSize;
        return ans;
        */

        vector<int> result;
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }

        int tot=result.size();
        double ans=0;
        if(tot%2 == 0){
            int ind=tot/2;
            ans=result[ind-1]+result[ind];
            ans=ans/2;
        }
        else{
            int ind=tot/2;
            ans=result[ind];
        }
        return ans;
        
    }
};