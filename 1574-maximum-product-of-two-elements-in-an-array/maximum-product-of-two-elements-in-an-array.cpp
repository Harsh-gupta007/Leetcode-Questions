class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int m=nums[n-1];
        int o=nums[n-2];

        return((m-1)*(o-1));
    }
};