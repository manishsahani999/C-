vvi pascalsTriangle(int A) {
    vvi x(A);

    FOR(i, 0, A) x[i] = vi (i + 1, 1);

    FOR (i, 2, A){
        FOR (j, 1, x[i].size() -1)
            x[i][j] = x[i - 1][j - 1] + x[i - 1][j]; 
    }

    return x;
}


long long nCr(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

vi getRow(int A) {
    vi x(A + 1, 1);

    FOR(i, 1, A) {
        x[i] = nCr(A, i);
    } 
    
    return x;
}
