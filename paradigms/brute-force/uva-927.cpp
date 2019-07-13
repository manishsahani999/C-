void uva_927() {
    int TC, a[21], n, i, j, d, k, temp; scanf("%d", &TC);
    ll b;
    while (TC--) {
        scanf("%d", &n);
        memset(a, 0, sizeof a);
        FOR(k, 0, n + 1) { scanf("%d", &a[k]); }
        scanf("%d %d", &d, &k);
        i = 0; j = 0;
        while (i <= k) {
            i += (j + 1)*d;
            if (i >= k) {
                temp = 1; b = 0;
                FOR(k, 0, n + 1) {
                    b += temp * a[k];
                    temp *= j + 1;
                }
                printf("%d\n", b);
                break;
            }
            j++;
        }
    }

    return 0;
}