void division() {
    int n, found;
    while(scanf("%d", &n), n) {
        found = 0;
        for(int fghij = 1234; fghij <= 98765 / n; fghij++) {
            int abcde = fghij * n;
            int temp, used = (fghij < 10000);
            temp = abcde; while (temp) { used |= 1 << (temp % 10); temp /= 10; }
            temp = fghij; while (temp) { used |= 1 << (temp % 10); temp /= 10; }
            if (used == (1 << 10) - 1) {
                printf("%0.5d / %0.5d = %d\n", abcde, fghij, n);
                found = 1;
            }
        }

        if (!found) printf("There are no solutions for %d.\n", n);
        printf("\n");
    }
}