int mySqrt(int x) {
    double root;
    double n=x;

    if(x==0){
        return 0;
    }
    while(1){

        root=(n+x/n)/2;

        if (n - root < 0.000001 && root - n < 0.000001)
            break;

            n = root;
    }
    return (int)root;
}