class Solution {
private:
int reverse(int no)
{
    long long int revNo=0;
    while(no!=0)
    {
        int ans=no%10;
        revNo=(revNo*10)+ans;
        no=no/10;
    }

    if(revNo>INT_MAX || revNo<INT_MIN)
    {
        return false;
    }
    return revNo;
}
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int givenNumber=x;
        int reversedNo=reverse(givenNumber);

        if(givenNumber == reversedNo)
        {
            return true;
        }else{
            return false;
        }
        
    }
};