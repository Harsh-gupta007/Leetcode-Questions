bool canJump(int* nums, int numsSize) {
    int maxJump=0;
    for(int i=0; i<numsSize; i++){

        if(i>maxJump){
            return false;
        }
        if(i+nums[i]>maxJump){
            maxJump=i+nums[i];
        }
    }
    return true;
}