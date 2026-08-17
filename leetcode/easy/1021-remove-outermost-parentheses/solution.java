class Solution {
    public String removeOuterParentheses(String s) {
        int n=s.length();
        int depth=0;
        // String ans="";
        StringBuilder finalAns=new StringBuilder();
        for(char ch : s.toCharArray()){
            if(ch == '('){
                if(depth>0){
                    // ans+=ch;
                    finalAns.append(ch);
                }
                depth++;
            }else{
                depth--;
                if(depth>0){
                    // ans+=ch;
                    finalAns.append(ch);
                }
            }
        }
        // return ans;
        // return finalAns; 
        return finalAns.toString();
        
    }
}