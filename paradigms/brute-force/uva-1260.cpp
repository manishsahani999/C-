void uva_1260() {
    int TC, n, sum, tmp, a[1005]; scanf("%d", &TC);
    while(TC--) {
        scanf("%d", &n); sum = 0;
        FOR(i, 0, n) scanf("%d", &a[i]);

        FOR(i, 1, n) { FOR(j, 0, i) {
            if (a[i] >= a[j]) sum++;
        } }

        printf("%d\n", sum);
    }

}