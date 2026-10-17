class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> hashSet=new HashSet<>();
        int n=nums.length;
        for(int it : nums){
            if(hashSet.contains(it)){
                return true;
            }
            hashSet.add(it);
        }
        return false;
    }
}