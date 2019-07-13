void uva_105() {

    int lim = 10001, size = 0, j, Rmax, h[lim], L, H, R;

    memset(h, 0, sizeof h);

    while (scanf("%d %d %d", &L, &H, &R), (L || H || R)) {
        FOR (i, L, R) { h[i] = max(h[i], H); }
        size = max(R, size);
        L = 0; H = 0; R = 0;
    };

    FOR (i, 1, size) {
        if (h[i - 1] != h[i]) 
            printf("%d %d ", i, h[i]);
    }

    printf("%d %d\n", size, h[size] );
}