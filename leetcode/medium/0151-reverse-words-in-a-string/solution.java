class Solution {
    public String reverseWords(String s) {
        StringBuilder str=new StringBuilder(s);
        str.reverse();

        int start=0;
        int n=s.length();
        while(start<n && str.charAt(start)==' '){
            start++;
        }

        StringBuilder result=new StringBuilder();

        for(int i=start;i<n;i++){
            StringBuilder word=new StringBuilder();
            while(i<n && str.charAt(i) != ' '){
                word.append(str.charAt(i));
                i++;
            }

            word.reverse();

            if(word.length() > 0){
                result.append(word);
                result.append(' ');
            }
        }

        if(result.length()>0 && result.charAt(result.length()-1) == ' '){
            result.deleteCharAt(result.length()-1);
        }

        return result.toString();
    }
}