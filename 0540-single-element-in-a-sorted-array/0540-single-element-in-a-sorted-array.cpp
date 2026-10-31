class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,mid;

        while(start<end){
            mid=(start+end)/2;

            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }
        }
        return nums[start];
    }
};