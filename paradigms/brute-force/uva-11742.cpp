void socializing() {
    int n, m, a[21], b[21], c[21], t[9], ans, flag, l , r;
    while (scanf("%d %d", &n, &m) && (n || m)) {
        
        memset(t, 0, sizeof t);
        FOR(i, 0, n) t[i] = i;

        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        memset(c, 0, sizeof c);

        FOR(i, 0, m) scanf("%d %d %d", &a[i], &b[i], &c[i]);

        ans = 0;

        do {
            flag = 0;
            for (int i = 0; i < m && !flag; i++) {
                // calculating the distance between a[i] and b[i]
                l = 0; r = 0;
                while(t[l] != a[i]) l++;
                while(t[r] != b[i]) r++;

                if (c[i] < 0) {
                    // a[i] and b[i] should be atleast c[i] seats apart
                    if (abs(l - r) < abs(c[i])) flag = 1;
                } 
                else {
                    // a and b should be atmost c seats apart
                    if (abs(l - r) > abs(c[i])) flag = 1;
                }
            }

            if (!flag) ans++;
        } while (next_permutation(t, t + n));

        printf("%d\n", ans);
    }
}