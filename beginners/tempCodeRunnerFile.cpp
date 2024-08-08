int digits, sum = 0, noOfDigits = 0;
    int initialValue = n;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        noOfDigits++;
    }

    while (n > 0)
    {
        digits = n % 10;
        cout << "Digits = " << digits << endl;
        digits = pow(digits, noOfDigits);
        cout << "Digits square = " << digits << endl;
        sum = sum + digits;
        cout << "Sum = " << sum << endl;
        n = n / 10;
        cout << "N value = " << n << endl;
    }