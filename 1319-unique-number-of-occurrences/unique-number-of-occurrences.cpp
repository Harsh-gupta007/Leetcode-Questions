class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        int n = arr.size();

        int count=1;
        int first=0;

        sort(arr.begin(),arr.end());

        for(int i =0;i<n ; i++){

          if(i>0 && arr[i]==arr[i-1]){
            count++;
          }else{
            count =1;
          }
          first = arr[i];

          m[first]=count;

        }

        unordered_set<int> seen;
        for (auto& entry : m) {
            if (!seen.insert(entry.second).second) {
                return false;
            }
        }

        return true;
    }
};