bool checkDivisibility(int n) {
    int temp = n;
    int sum = 0, product = 1, remainder;

    while (temp != 0) {
        remainder = temp % 10;

        sum += remainder;
        product *= remainder;

        temp /= 10;
    }
    int total_sum= sum + product;

    if (n%total_sum==0){
        return true;
    }

    return false;
}