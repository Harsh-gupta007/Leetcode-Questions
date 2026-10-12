class Solution {
public:
    int reverseNum(int n){
        int count=0;
        int rev=0;
        while(n!=0){
            count= n%10;
            rev = rev*10 + count;
            n=n/10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        
       int mirNum =0;

       mirNum = n - reverseNum(n);

       if(mirNum < 0){
        mirNum = -mirNum;
       }
       return mirNum;
    }

};