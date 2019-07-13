/*
| grey code
*/

void greyCode() {
    int T, N, K, n = 1;  
    vi gc {0 , 1};
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &K);
        
        while (n < N) {
            for (int i = gc.size() - 1; i >= 0; i--) {
                gc.pb(pow(2, n) + gc[i]);
            }
            n++;
        }

        printf("%d\n", gc[K]);

    }
}

void greyCodeBM() {
    int T, N, K; scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &K);
        printf("%d\n", (K ^ (K >> 1)));
    }
}

int greyToBinary(int S) {
    int mask = S >> 1;
    while (mask != 0) {
        S ^= mask;
        mask = mask >> 1;
    }

    return S;
} 

int greyToBinaryFast(int S) {
    S ^= ( S >> 16 );
    S ^= ( S >> 8 );
    S ^= ( S >> 4 );
    S ^= ( S >> 2 );
    S ^= ( S >> 1 );
    return S;
}