int minCostJumps(vi &, int);

int minCostJumps(vi & A, int k) {
    int size = A.size(), j = 0, ans = 0, t_cost = 0, t_nex = 0;

    while (j < size) {
        t_cost = INT_MAX;
        t_nex = 0;
        for (int i = j+1; i < j + 1 + k && i < size; i++) {
            if (abs(A[j] - A[i]) <= t_cost) {
                t_cost = abs(A[j] - A[i]);
                t_nex = i;
            }
        }
        ans += t_cost;
        j = j + t_nex;
        if (j == size - 1) break;
    }

    return ans;
    
}

int minCostJumpsDP(vi & A, int k) {
    int size = A.size();
    vi x(size, INT_MAX);

    // base case
    x[0] = 0;

    FOR(i, 0, size) {
        FOR(j, i + 1, i + k + 1) {
            x[j] = min(x[j], x[i] + abs(A[i] - A[j]));
        }
    }

    return x[size - 1];
}