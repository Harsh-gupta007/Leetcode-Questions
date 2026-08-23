int maxProduct(int n) {
    int max=0,product,digit,arr[100],i=0;
    while(n!=0){
        digit=n%10;
        arr[i]=digit;
        n/=10;
        i++;
    }

    for(int j=0;j<i;j++){
        
        for(int k=j+1;k<i;k++){

            product=arr[j]*arr[k];
            
            if(product>max){
                max= product;
            }
        }
    }

    return max;

}