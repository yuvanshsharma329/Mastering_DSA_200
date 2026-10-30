# Find Rotation Count

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an increasing sorted rotated array  **arr[]** of distinct integers. The array is right-rotated  **k**  times. Find the value of  **k**.

 **Examples:** 

```
Input: arr[] = [5, 1, 2, 3, 4]
Output: 1
Explanation: The given array is [5, 1, 2, 3, 4]. The original sorted array is [1, 2, 3, 4, 5]. We can see that the array was rotated 1 times to the right.

```

```
Input: arr = [1, 2, 3, 4, 5]
Output: 0
Explanation: The given array is not rotated.
```

```
Input: arr = [6, 9, 2, 4]
Output: 2
Explanation: The original array is [2, 4, 6, 9] and we get the above array after two rotations.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T11:57:10.092Z  

```cpp
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int start=0,end=n-1,mid;
        
        while(start<end){
            mid=(start+end)/2;
            
            if(arr[mid]>arr[end]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rotation4723/1)