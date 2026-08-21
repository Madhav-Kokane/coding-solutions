# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** Java  
**Runtime:** 7 ms (beats 34.02%)  
**Memory:** 51.4 MB (beats 5.15%)  
**Submitted:** 2026-08-21T06:48:50.256Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)