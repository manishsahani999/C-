

void jollybean() {
    int T, N, M, tem, ans = 0, lim, a[1025], temp[1025];
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &M);
        
        lim = (1<<N);
        ans = 0;

        memset(a, 0, sizeof a);
        while (M--) {
            scanf("%d", &tem);
            a[tem - 1] = 1;
        }

        while (N--) {
            memset(temp, 0, sizeof temp);
            lim >>= 1;
            FOR (i, 0, lim) {
                if ( a[i<<1] ^ a[(i<<1) + 1]) ans++;
                temp[i] = ( a[i << 1] & a[(i << 1) + 1]);
            }

            memcpy(a, temp, sizeof a);
        }

        printf("%d\n", ans);
    }
}