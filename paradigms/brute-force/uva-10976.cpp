void uva_10976() {
    int n, lim, c; double x;
    while (scanf("%d", &n) != EOF && n) {
        c = 0;
        vpi ans;
        FOR (y, n + 1, 2*n + 1) {
            if (y - n != 0) {
                x = (double) (n * y) / (y - n);
                if (floor(x) == x) { c++; ans.pb(mp(x, y)); }
            }
        }

        printf("%d\n", c);

        FOR (i, 0, ans.size()) printf("1/%d = 1/%d + 1/%d\n", n, ans[i].fi, ans[i].se);

    }
}