class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int dummy = 0;
            int value = nums[i];

            do {
                value /= 10;
                dummy++;
            } while (value != 0);

            if (dummy % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};