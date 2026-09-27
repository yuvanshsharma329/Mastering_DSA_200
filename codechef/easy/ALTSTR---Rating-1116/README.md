# ALTSTR - Rating 1116

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Alternating String

A binary string is called  *alternating*  if no two adjacent characters of the string are equal. Formally, a binary string $T$ of length $M$ is called alternating if $T_i \neq T_{i +1}$ for each $1 \leq i \lt M$.

For example, `0`, `1`, `01`, `10`, `101`, `010`, `1010` are alternating strings while `11`, `001`, `1110` are not.

You are given a binary string $S$ of length $N$. You would like to rearrange the characters of $S$ such that the length of the  **longest alternating substring**  of $S$ is  **maximum**. Find this maximum value.

A binary string is a string that consists of characters `0` and `1`. A string $a$ is a substring of a string $b$ if $a$ can be obtained from $b$ by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

### Input Format
- The first line of input contains an integer $T$, denoting the number of test cases. The $T$ test cases then follow:
- The first line of each test case contains an integer $N$.
- The second line of each test case contains the binary string $S$.
### Output Format

For each test case, output the maximum possible length of the longest alternating substring of $S$ after rearrangement.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq N \leq 10^5$
- $S$ contains only the characters 0 and 1.
- Sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
3
110
4
1010
4
0000
7
1101101

```

```
3
4
1
5

```

### Explanation:

 **Test case $1$:**  Swapping the second and third characters makes $S=101$. Hence the length of the longest alternating substring is $3$ (choosing the entire string as a substring).

 **Test case $2$:**  The given string $S=1010$ is an alternating string of length $4$.

 **Test case $3$:**  The length of the longest alternating substring is $1$ for any rearrangement of $S=0000$.

 **Test case $4$:**  One possible rearrangement of $S$ is $1\underline{10101}1$, which has an alternating substring of length $5$ (the substring starting at index $2$ and ending at index $6$).

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T18:24:23.701Z  

```c_cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int cnt0 =0;
    int cnt1 = 0;
    
    for (char c : s) {
        if (c == '0') {
            cnt0++;
        } else {
            cnt1++;
        }
    }
    
    int max_len = min(n, 2 * min(cnt0, cnt1) + 1);
    cout << max_len << "\n";
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/ALTSTR)