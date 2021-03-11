## Problem Statement
Given two integers m & n, find the number of possible sequences of length n such that each of the next element is greater than or equal to twice of the previous element but less than or equal to m.

---
## How to use code

Download project
```
git clone https://github.com/phantom654/daa1.git
```
Project Initialize 
```
#Go to assignment folder
cd daa1/ass1

#Compile the code
g++ algo1.cpp -o algo1
g++ algo2.cpp -o algo2

```
---

Run the code
```
./algo1
./algo2
```

Input
```
First line of input contains two space seperated integers N and M.
```

Output
```
Number of possible sequences of length n such that each of the next element is greater than or equal to twice of the previous element but less than or equal to m
```
---

**Test case**

Test Case-1
```
Input:
4 100

Output:
465514674925326
```
Test Case-2
```
Input:
10 50

Output:
0
```

---

### Theory
algo1 : We use recursion with recursive function solve(n,m) = solve(n-1,1/2) + solve(n-1,2/2) + .... solve(n-1,m/2)

algo2 : We use memorised recurion with recursive funtion solve(n,m) = solve(n-1,m/2) + solve(n,m-1)

---

### Analysis

**Time Complexity**

```
#Algo 1 :
Worst case : O(m^n)
Best case  : Ω(1) when n=1

#Algo 2 :
Worst case : O(min(n,log2(MAX_M))*m)
Best case  : Ω(1) when answer is 0
```


**Space Complexity**

```
#Algo 1 :
The space complexity is O(m^n)

#Algo 2 :
The space complexity is O(min(n,log2(MAX_M))*m)
```
---

### References

CP-Algorithms : Divide and Conquer Algorithm

GFG : Sequences of given length where every element is more than or equal to twice of previous