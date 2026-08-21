class Solution {
    public boolean isTrue(String s,int i,int j){
        if(i>=j){
            return true;
        }

        while(i<j && !Character.isLetterOrDigit(s.charAt(i))){
            i++;
        }

        while(i<j && !Character.isLetterOrDigit(s.charAt(j))){
            j--;
        }

        if(Character.toLowerCase(s.charAt(i)) != Character.toLowerCase(s.charAt(j))){
            return false;
        }

        return isTrue(s,i+1,j-1);
    }
    public boolean isPalindrome(String s) {
        return isTrue(s,0,s.length()-1);
    }
}