class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=m-1;
        int j=n-1;
        int key=m+n-1;
        while(i>=0 && j>=0){
            if(nums2[j]>=nums1[i]){
                nums1[key]=nums2[j];
                key--;
                j--;
            }else{
                nums1[key]=nums1[i];
                i--;
                key--;
            }
        }

        while(i>=0){
            nums1[key]=nums1[i];
            key--;
            i--;
        }

        while(j>=0){
            nums1[key]=nums2[j];
            key--;
            j--;
        }
    }
}