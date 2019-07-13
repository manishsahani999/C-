void potency() {
    int N, w[65536], p[65536], ma, temp, ne;
    while (scanf("%d", &N) == 1) {
        int M = (1 << N);

        ma = INT_MIN;

        memset(w, 0, sizeof w);
        FOR(i, 0, M) {
            scanf("%d", &w[i]);
        }

        memset(p, 0, sizeof p);
        FOR(i, 0, M) {
            FOR(j, 0, N) {
                ne = i ^ (1 << j);
                p[i] += w[ne];
            }
        }

        FOR(i, 0, M) { 
            FOR(j, 0, N) {
                temp = 0;
                ne = i ^ (1 << j);
                temp = p[i] + p[ne];
                ma = max(temp, ma);
            }
        }
            
        printf("%d\n", ma);
         
    }   
}