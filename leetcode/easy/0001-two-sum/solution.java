class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> hashMap=new HashMap<>();
        int[] result=new int[2];
        int n=nums.length;

        for(int i=0;i<n;i++){
            int remain=target-nums[i];

            if(hashMap.containsKey(remain)){
                result[0]=hashMap.get(remain);
                result[1]=i;
                return result;
            }else{
                hashMap.put(nums[i],i);
            }
        }
        return result;
    }
}