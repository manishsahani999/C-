int main()
{
    int t, m, n, lim = 100001, pr, ml;
    int c[lim], a[lim], d[lim], b[lim], f[lim], ans[lim];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &m);

        pr = 0;

        memset(c, 0, sizeof c);
        memset(d, 0, sizeof d);
        memset(b, 0, sizeof b);
        memset(f, 0, sizeof f);
        memset(ans, 0, sizeof ans);

        FOR(i, 0, m) { 
            scanf("%d", &c[i]);
            a[i] = c[i];
        }
        

        FOR(i, 0, n) {
            scanf("%d %d %d", &d[i], &f[i], &b[i]);
            a[d[i] - 1] -= 1;
        }

        ml = 0;       

        FOR(i, 0, n) {
            if (c[d[i] - 1] > 0) {
                pr += f[i];
                c[d[i] - 1] -= 1;
                ans[i] = d[i];
            }
            else {
                // find least fav drink
                while (a[ml] <= 0 ) {
                    ml++;
                }

                if (a[ml] > 0) {
                    a[ml] -= 1;
                    c[ml] -= 1;
                    pr += b[i];
                    ans[i] = ml + 1;
                }
                
            }
        }

        printf("%d\n", pr);
        FOR (i, 0, n) printf("%d ", ans[i]);
        printf("\n");
    }
}