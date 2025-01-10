class Solution {
    #define ll long long
public:
    
    int minOperations(vector<int>& nums) {

        ll ans = 0;

        for(int i = 0; i < nums.size()-2; i++){
            if(nums[i] == 0){
                nums[i] = 1;
                nums[i+1] = (nums[i+1] == 1) ? 0:1;
                nums[i+2] = (nums[i+2] == 1) ? 0:1;
                ans++;
            }
        }
        int ze = count(nums.begin(),nums.end(),0);
        if( ze > 0) return -1;
        return ans;
    }
};
