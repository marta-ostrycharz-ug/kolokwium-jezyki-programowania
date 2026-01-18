int process_number(int n) {
    int steps = 0;

    while (n > 1) {
        if (n % 3 == 0) {
            n /= 3;
        } else if (n % 3 == 1) {
            n += 5;
        } else {
            n -= 1;
        }
        steps++;
    }

    return steps;
}
