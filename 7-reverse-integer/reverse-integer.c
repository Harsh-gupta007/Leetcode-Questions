int reverse(int n) {
    int rev = 0, remainder;

    while (n != 0) {
        remainder = n % 10;

        if (rev > 214748364 || rev < -214748364)
            return 0;

        rev = rev * 10 + remainder;
        n = n / 10;
    }

    return rev;
}