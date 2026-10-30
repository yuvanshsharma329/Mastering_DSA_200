class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1, mid;


        while(start < end) {
            mid = (start + end) / 2;

            if(nums[start] > nums[end]) {

                if(nums[start] > nums[mid]) {
                    end = mid;
                }
                else {
                    start = mid + 1;
                }
            }
            else {
                return nums[start];
            }
        }

        return nums[start];
    }
};