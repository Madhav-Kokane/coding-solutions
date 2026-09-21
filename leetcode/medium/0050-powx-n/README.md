# Pow(x, n)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Implement pow(x, n), which calculates `x` raised to the power `n` (i.e., `xn`).

 

 **Example 1:** 

```
Input: x = 2.00000, n = 10
Output: 1024.00000

```

 **Example 2:** 

```
Input: x = 2.10000, n = 3
Output: 9.26100

```

 **Example 3:** 

```
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

```

 

 **Constraints:** 

- -100.0 < x < 100.0
- -231 <= n <= 231-1
- n is an integer.
- Either x is not zero or n > 0.
- -104 <= xn <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.7 MB  
**Submitted:** 2026-09-21T13:13:06.511Z  

```cpp
class Solution {
public:
    double recSoln(double x,long long n){
        if(n == 0){
            return 1;
        }
        
        double half=recSoln(x,n/2);

        if(n%2 == 0){
            return half * half;
        }

        return x*half*half;


    }
    double myPow(double x, int n) {
        double ans=1;

        long long N=n;

        if(n<0){
            return 1/recSoln(x,-N);
        }
        return recSoln(x,N);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/powx-n/)