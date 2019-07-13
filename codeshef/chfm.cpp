int main() {
    int T, N, f, a[100010]; long double m, s, t; scanf("%d", &T);
    while (T--) {
        scanf("%d", &N); m = 0; s= 0; f = 0;
        FOR(i, 0, N) scanf("%d", &a[i]);

        FOR(i, 0, N) s += a[i];
        m = (long double)s/N;

        FOR(i, 0, N) {
            t = (long double) (s - a[i]) / (N - 1);
            if (fabs(t - m) < 1e-12) {printf("%d\n", i + 1); f = 1; break;}
        }

        if (!f) printf("Impossible\n");

    }

    return 0;
}