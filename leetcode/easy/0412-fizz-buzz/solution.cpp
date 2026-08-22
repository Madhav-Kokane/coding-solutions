class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                // answer[i]="FizzBuzz";
                answer.push_back("FizzBuzz");
            }else if(i%3==0){
                // answer[i]="Fizz";
                answer.push_back("Fizz");
            }else if(i%5==0){
                // answer[i]="Buzz";
                answer.push_back("Buzz");
            }else{
                // answer[i]=to_string(i);
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};