// this will get you TLE
void bars() {
    int T, n, p, sol, sum, a[21]; scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &p);

        memset(a, 0, sizeof a);
        
        FOR(i, 0, p) scanf("%d", &a[i]);

        sort(a, a + p);

        sol = 0;

        do
        {
            sum = 0;
            FOR(i, 0, p) {
                sum += a[i];
                if (sum == n) sol = 1;
            }
            
        } while (next_permutation(a, a + p) && !sol);
        
        if (sol || !n) printf("YES\n");
        else printf("NO\n");

    }
}

// Faster way

void barsBM() {
    int T, n, p, sum, sol, a[21]; scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &p);
        memset(a, 0, sizeof a);
        FOR(i, 0, p) scanf("%d", &a[i]);
        sol = 0;
        for(int i = 0; i < (1 << p); i++) {
            sum = 0;
            for(int j = 0; j < p; j++) if (i & (1 << j)) sum += a[j];
            if(sum == n) { sol = 1; break; }
        }

        if (sol) printf("YES\n");
        else printf("NO\n");
    }
}