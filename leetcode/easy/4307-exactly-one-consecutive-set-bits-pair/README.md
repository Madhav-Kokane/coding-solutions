# Q1. Exactly One Consecutive Set Bits Pair

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`.

Return `true` if its binary representation contains  **exactly one adjacent pair**  of set bits, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  n = 6

 **Output:**  true

 **Explanation:** 

- Binary representation of 6 is 110.
- There is exactly one adjacent pair of set bits ("11"). Thus, the answer is true​​​​​​​.

 **Example 2:** 

 **Input:**  n = 5

 **Output:**  false

 **Explanation:** 

- Binary representation of 5 is 101.
- There is no adjacent pair of set bits. Thus, the answer is false​​​​​​​.

 

 **Constraints:** 

- 0 <= n <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 61.20%)  
**Submitted:** 2026-07-14T05:16:05.694Z  

```cpp
class Solution {
public:
    string toBinary(int n){
        if(n==0){
            return "0";
        }

        string binary="";
        while(n>0){
            if(n%2 ==0){
                binary += '0';
            }else{
                binary += '1';
            }
            n=n/2;
        }

        reverse(binary.begin(),binary.end());
        return binary;
    }
    bool consecutiveSetBits(int n) {
        string str=toBinary(n);
        int cnt=0;
        for(int i=1;i<str.size();i++){
            if(str[i]=='1' && str[i-1]=='1'){
                cnt++;;
            }
        }
        return cnt==1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/)