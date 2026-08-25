double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0,k=0;
    int n1=nums1Size;
    int n2=nums2Size;
    int l= n1+n2;
    int merged[l];
    while(i<n1&&j<n2){
        if(nums1[i]<=nums2[j]){
           merged[k++]=nums1[i++];
        }else{
            merged[k++]=nums2[j++];
        }
    }

    while(i<n1){
        merged[k++]=nums1[i++];
    }

    while(j<n2){
        merged[k++]=nums2[j++];
    }
    
    double median;

    if(l%2!=0){
        median= merged[l/2];
    }else{
        median= (merged[l/2]+merged[(l/2)-1])/2.0;
    }
    return median;
}