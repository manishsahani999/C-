void uva_10478()
{
    int n, m, q, tmp, c = 0, ans, x, a[1005];
    while (scanf("%d", &n), n)
    {
        FOR(i, 0, n)
        scanf("%d", &a[i]);
        scanf("%d", &m);

        sort(a, a + n);
        printf("Case %d:\n", ++c);

        while (m--)
        {
            scanf("%d", &q);
            tmp = INT_MAX;
            ans = 0;
            FOR(i, 0, n) FOR(j, 0, n) {
                if (i != j && tmp > abs(a[i] + a[j] - q)) {
                    tmp = abs(a[i] + a[j] - q);
                    ans = a[i] + a[j];
                }
            }
            printf("Closest sum to %d is %d.\n", q, ans);
        }
    }
}