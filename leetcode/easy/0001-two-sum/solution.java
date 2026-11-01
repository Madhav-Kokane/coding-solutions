class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> hashMap=new HashMap<>();
        int[] ans=new int[2];

        for(int i=0;i<nums.length;i++){
            int remain=target-nums[i];

            if(hashMap.containsKey(remain)){
                ans[0]=hashMap.get(remain);
                ans[1]=i;
                return ans;
            }

            hashMap.put(nums[i],i);
        }
        return ans;
    }
}