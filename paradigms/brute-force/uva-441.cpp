void lotto() {
    int k, s[13], c = 0;
    while(scanf("%d", &k), k) {
        memset(s, 0, sizeof s);
        FOR(i, 0, k) scanf("%d", &s[i]);

        if (++c > 1) printf("\n");

        FOR(a, 0, k - 5) { FOR (b, a + 1, k - 4) {
            FOR(c, b + 1, k - 3) { FOR(d, c + 1, k - 2) {
                FOR(e, d + 1, k - 1) { FOR(f, e + 1, k) {
                    printf("%d %d %d %d %d %d\n", s[a], s[b], s[c], s[d], s[e], s[f]);
                } }
            } }
        } }
    }
}