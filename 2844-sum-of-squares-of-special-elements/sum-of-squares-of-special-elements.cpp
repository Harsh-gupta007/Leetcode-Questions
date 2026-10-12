class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n= nums.size();
        int sum =0;
        
        for(int i=1; i<n+1 ; i++){
            int count =0;
            if(n % i == 0){

                count = nums[i-1]*nums[i-1];

                sum = sum + count;
            }
        }
        return sum;
    }
};