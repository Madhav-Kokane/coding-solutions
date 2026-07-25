class Solution {
    public String defangIPaddr(String address) {
        String str=new String();
        int len=address.length();
        for(int i=0;i<len;i++){
            if(address.charAt(i) == '.'){
                str=str.concat("[.]");
            }else{
                str+=address.charAt(i);
            }
        }
        return str;
    }
}