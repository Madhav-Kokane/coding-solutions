# Sequential Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

An integer has  *sequential digits*  if and only if each digit in the number is one more than the previous digit.

Return a  **sorted**  list of all the integers in the range `[low, high]` inclusive that have sequential digits.

 

 **Example 1:** 

```
Input: low = 100, high = 300
Output: [123,234]

```

 **Example 2:** 

```
Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]

```

 

 **Constraints:** 

- 10 <= low <= high <= 10^9

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 97.69%)  
**Submitted:** 2026-07-13T03:03:00.624Z  

```cpp
class Solution {
public:
/*
    bool isValid(int i){
        string str=to_string(i);
        for(int i=0;i<str.length()-1;i++){
            int n1=str[i]-'0';
            int n2=str[i+1]-'0';
            if((n2-n1) != 1){
                return false;
            }
        }
        return true;
    }
*/    
    vector<int> sequentialDigits(int low, int high) {
        /*
        vector<int> result;
        for(int i=low;i<=high;i++){
            if(isValid(i)){
                result.push_back(i);
            }
        }
        return result;
        */

        string str="123456789";
        string lows=to_string(low);
        string highs=to_string(high);
        vector<int> result;
        
        for(int i=lows.size();i<=highs.size();i++){
            for(int j=0;j<=9-i;j++){
                string n=str.substr(j,i);
                int num=stoi(n);
                if(num>=low && num<=high){
                    result.push_back(num);
                }
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sequential-digits/)