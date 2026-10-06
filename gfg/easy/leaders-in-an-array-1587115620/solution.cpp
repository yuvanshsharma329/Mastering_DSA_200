class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        
        vector<int>ans;
        // code here
        int n=arr.size();
        int lead=arr[n-1];
        
        ans.push_back(lead);
        
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=lead){
                ans.push_back(arr[i]);
                lead=arr[i];
            }
            else{
                continue;
            }
        }
         reverse(ans.begin(),ans.end());
         
         return ans;
        
    }
};