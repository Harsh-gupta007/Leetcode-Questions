class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        
        sort(nums.begin(),nums.end());
        int st=0,end=n-1;

       for(int i=1;i<n-1;i++){

        if(nums[i]>nums[st] && nums[i]<nums[end]){
            count++;
        }
       }
       return count;

    }
};