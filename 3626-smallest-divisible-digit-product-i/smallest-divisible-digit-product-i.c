int smallestNumber(int n, int t) {
     int temp = n;
    int  product = 1, remainder;

    while(product % t != 0){
        temp =n;
        product=1;
        
         while (temp != 0) {
        remainder = temp % 10;
        product *= remainder;

        temp /= 10;
    }
      if(product%t!=0){
       n++;
      }
    
    }
    return n;
}   


   