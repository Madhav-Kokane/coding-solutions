# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` *if* `x` *is a   palindrome , and* `false` *otherwise*.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 65.79%)  
**Submitted:** 2026-07-14T07:54:24.969Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)