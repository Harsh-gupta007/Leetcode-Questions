class Solution {
public:
    int heightChecker(vector<int>& height) {
        vector<int> expHeight = height;
        int n = height.size();
        int count = 0;

        sort(expHeight.begin(),expHeight.end());
        
        for(int i=0; i<n; i++){
           
           if(expHeight[i] != height[i]){
               count++;
           }
        }
        return count;
    }
};