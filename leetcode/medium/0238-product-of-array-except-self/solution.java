class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        if(n==1){
            return new int[]{1};
        }
        ArrayList<Integer> lTor=new ArrayList<>();
        int prod=1;
        for(int i=0;i<n;i++){
            prod=prod*nums[i];
            lTor.add(prod);
        }


        prod=1;
        ArrayList<Integer> rToL=new ArrayList<>(Collections.nCopies(n,0));
        for(int i=n-1;i>=0;i--){
            prod=prod*nums[i];
            rToL.set(i,prod);
        } 

        // ArrayList<Integer> ans=new ArrayList<>(n);
        int[] ans=new int[n];
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=rToL.get(i+1);
            }else if(i == n-1){
                ans[i]=lTor.get(i-1);
            }else{
                ans[i]=lTor.get(i-1)*rToL.get(i+1);
            }
        }
        return ans;
    }
}