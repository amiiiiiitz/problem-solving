class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;

    for(int val : nums){
        ans ^= val;
    } 
    cout << ans << endl;

    return ans; 
        
    }
};