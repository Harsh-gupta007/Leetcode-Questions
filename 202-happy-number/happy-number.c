bool isHappy(int n) {
    int arr[1000] = {0};
    int count = 0;

    if (n <= 0)
        return false;

    while (n != 1) {

        int sum = 0;

        
        while (n != 0) {
            int remainder = n % 10;
            sum += remainder * remainder;
            n = n / 10;
        }

        if (sum == 1)
            return true;

        
        for (int i = 0; i < count; i++) {
            if (sum == arr[i])
                return false;
        }

       
        if (count >= 1000)
            return false;

        arr[count] = sum;
        count++;

        n = sum;
    }

    return true;
}