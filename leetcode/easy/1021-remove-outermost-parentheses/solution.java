class Solution {
    public String removeOuterParentheses(String s) {
        int n=s.length();
        int depth=0;
        String ans="";
        for(char ch : s.toCharArray()){
            if(ch == '('){
                if(depth>0){
                    ans+=ch;
                }
                depth++;
            }else{
                depth--;
                if(depth>0){
                    ans+=ch;
                }
            }
        }
        return ans;
    }
}