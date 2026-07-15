# GCD of Odd and Even Sums

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`. Your task is to compute the  **GCD**  (greatest common divisor) of two values:

- sumOdd: the sum of the smallest n positive odd numbers.
- sumEven: the sum of the smallest n positive even numbers.

Return the GCD of `sumOdd` and `sumEven`.

 

 **Example 1:** 

 **Input:**  n = 4

 **Output:**  4

 **Explanation:** 

- Sum of the first 4 odd numbers sumOdd = 1 + 3 + 5 + 7 = 16
- Sum of the first 4 even numbers sumEven = 2 + 4 + 6 + 8 = 20

Hence, `GCD(sumOdd, sumEven) = GCD(16, 20) = 4`.

 **Example 2:** 

 **Input:**  n = 5

 **Output:**  5

 **Explanation:** 

- Sum of the first 5 odd numbers sumOdd = 1 + 3 + 5 + 7 + 9 = 25
- Sum of the first 5 even numbers sumEven = 2 + 4 + 6 + 8 + 10 = 30

Hence, `GCD(sumOdd, sumEven) = GCD(25, 30) = 5`.

 

 **Constraints:** 

- 1 <= n <= 10​​​​​​​00

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 16.66%)  
**Memory:** 8.6 MB (beats 9.11%)  
**Submitted:** 2026-07-15T06:28:45.020Z  

```cpp
class Solution {
public:
    int gcd(int x,int y){
        while(y!=0){
            int rem=x%y;
            x=y;
            y=rem;
        }
        return x;
    }
    int gcdOfOddEvenSums(int n) {
        // return n;
        int sumOdd=(n*n);
        int sumEven=n*(n+1);
        if(sumOdd>sumEven){
            return gcd(sumOdd,sumEven);
        }
        return gcd(sumEven,sumOdd);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/gcd-of-odd-and-even-sums/)