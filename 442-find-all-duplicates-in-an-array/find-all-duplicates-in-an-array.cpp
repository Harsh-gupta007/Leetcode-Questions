class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> ans;
        int n = nums.size();
        int a=0;

        for(int i=0;i<n;i++){
            if(s.find(nums[i]) != s.end()){
                a=nums[i];
                ans.push_back(a);
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};