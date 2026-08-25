void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0;
    int n1=m;
    int n2=n;
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
    for(int i = 0; i < l; i++) {
    nums1[i] = merged[i];
    }
    
   
}