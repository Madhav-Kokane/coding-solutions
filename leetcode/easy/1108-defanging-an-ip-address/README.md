# Defanging an IP Address

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a valid (IPv4) IP `address`, return a defanged version of that IP address.

A  *defanged IP address*  replaces every period `"."` with `"[.]"`.

 

 **Example 1:** 

```
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

```

 **Example 2:** 

```
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

```

 

 **Constraints:** 

- The given address is a valid IPv4 address.

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 18.09%)  
**Memory:** 42.9 MB (beats 26.17%)  
**Submitted:** 2026-07-25T10:58:56.491Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/defanging-an-ip-address/)