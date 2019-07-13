void bin()
{
    int B[3], G[3], C[3], a[9], c, mi;
    while (scanf("%d %d %d %d %d %d %d %d %d ", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
    {
        mi = INT_MAX;
        string ans;

        // BCG
        c = C[0] + C[2] + G[0] + G[1] + B[1] + B[2];
        if (c < mi) { mi = c; ans = "BCG"; }

        // BGC
        c = C[0] + G[0] + C[1] + B[1] + B[2] + G[2];
        if (c < mi) { mi = c; ans = "BGC"; }

        // CBG
        c = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
        if (c < mi) { mi = c; ans = "CBG"; }

        // CGB
        c = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
        if (c < mi) { mi = c; ans = "CGB"; }

        // GBC
        c = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
        if (c < mi) { mi = c; ans = "GBC"; }

        // GCB
        c = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
        if (c < mi) { mi = c; ans = "GCB"; }

        cout << ans << " " << mi << "\n";
    }
}